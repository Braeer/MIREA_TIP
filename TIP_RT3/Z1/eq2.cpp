#include <iostream>
#include <cmath>
#include "eq2.h"

using namespace std;

eq2::eq2(double a1, double b1, double c1) {
    set_eq2(a1, b1, c1);
}

void eq2::set_eq2(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}

double eq2::find_X() {
    if (D < 0) {
        cout << "Корней нет." << endl;
        return 0;
    }
    else if (D == 0) {
        cout << "Один корень: " << endl;
        double x = (b - sqrt(D)) / (2 * a);
        cout << x << endl;
        return x;
    }
    else {
        cout << "Два корня, наибольший из них: " << endl;
        double x1 = (-b - sqrt(D)) / (2 * a);
        double x2 = (-b + sqrt(D)) / (2 * a);
        if (x1 > x2) {
            cout << x1 << endl;
            return x1;
        }
        else {
            cout << x2 << endl;
            return x2;
        }
    }
}

double eq2::find_Y(double x) {
    return a * x * x + b * x + c;
}

eq2 eq2::operator+(const eq2& other) const {
    double a_sum = a + other.a;
    double b_sum = b + other.b;
    double c_sum = c + other.c;
    return eq2(a_sum, b_sum, c_sum);
}