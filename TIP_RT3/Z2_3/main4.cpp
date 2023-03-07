#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    int n;
    cout << "Введите количество дробей: ";
    cin >> n;
    rational* mas = new rational[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Введите числитель и знаменатель дроби " << i + 1 << ": ";
        cin >> a >> b;
        mas[i].set_rational(a, b);
    }

    cout << "Все дроби: " << endl;
    for (int i = 0; i < n; i++) {
        mas[i].show();
    }

    cout << "Сложение: ";
    rational summa;
    for (int i = 0; i < n; i++) {
        summa = summa + mas[i];
    }
    summa.show();

    cout << "Вычитание: ";
    rational minus = mas[0];
    for (int i = 1; i < n; i++) {
        minus = minus - mas[i];
    }
    minus.show();

    cout << "Прибавление единицы в числитель: ";
    ++mas[0];
    mas[0].show();

    cout << "Равенство ";
    if (mas[0] == mas[1]) {
        cout << "верно";
    }
    else {
        cout << "неверно";
    }
    cout << endl;

    cout << "Первая дробь больше, чем вторая? ";
    if (mas[0] > mas[1]) {
        cout << "да";
    }
    else {
        cout << "нет";
    }
    cout << endl;

    cout << "Приравнивание первой дроби ко второй: ";
    mas[0] = mas[1];
    mas[0].show();
    cout << endl;

    return 0;
}
