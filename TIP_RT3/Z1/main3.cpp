#include <iostream>
#include "eq2.h"

using namespace std;

int main() {
    double a, b, c, a1, b1, c1;
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    eq2 eq_1(a, b, c);
    eq2 eq_2(a1, b1, c1);

    eq_1.find_X();
    eq_2.find_X();
    cout << eq_1.find_Y(6);
    cout << eq_2.find_Y(6);
    eq2 Equation = eq_1 + eq_2;
    return 0;
}