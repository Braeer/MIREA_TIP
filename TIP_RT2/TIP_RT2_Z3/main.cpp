#include <iostream>
#include "figure.h"

using namespace std;

int main()
{

    figure A;
    figure B;
    figure C;

    float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

    cout << "Введите координаты вершин для A ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    A.define(X1,X2,X3,X4,Y1,Y2,Y3,Y4);

    cout << "Введите координаты вершин для B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

    cout << "Введите координаты вершин для C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

    cout << "Параметры четырёхугольника A: "; A.show();
    cout << "Параметры четырёхугольника  B: "; B.show();
    cout << "Параметры четырёхугольника  C: "; C.show();

    cout << "\n";

    if (A.is_prug()) cout << "Четырёхугольник A прямоугольник\n";
    if (B.is_prug()) cout << "Четырёхугольник B прямоугольник\n";
    if (C.is_prug()) cout << "Четырёхугольник C прямоугольник\n";

    cout << "\n";

    if (A.is_square()) cout << "Четырёхугольник A квадрат\n";
    if (B.is_square()) cout << "Четырёхугольник B квадрат\n";
    if (C.is_square()) cout << "Четырёхугольник C квадрат\n";

    cout << "\n";

    if (A.is_romb()) cout << "Четырёхугольник A ромб\n";
    if (B.is_romb()) cout << "Четырёхугольник B ромб\n";
    if (C.is_romb()) cout << "Четырёхугольник C ромб\n";

    cout << "\n";

    if (A.is_in_circle()) cout << "Четырёхугольник A можно вписать в треугольник\n";
    if (B.is_in_circle()) cout << "Четырёхугольник B можно вписать в треугольник\n";
    if (C.is_in_circle()) cout << "Четырёхугольник C можно вписать в треугольник\n";

    cout << "\n";

    if (A.is_out_circle()) cout << "Четырёхугольник A может быть вписана окружность\n";
    if (B.is_out_circle()) cout << "Четырёхугольник B может быть вписана окружность\n";
    if (C.is_out_circle()) cout << "Четырёхугольник C может быть вписана окружность\n";
}