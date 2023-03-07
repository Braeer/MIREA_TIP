#include "rational.h"
#include "iostream"
#include <cstdlib>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

rational::rational(int a1, int b1) {
    if (b1 == 0) {
        throw invalid_argument("знаменатель не может быть равен нулю.");
    }
    num = a1;
    denom = b1;
    reduce();
}

void rational::set_rational(int a1, int b1) {
    if (b1 == 0) {
        throw invalid_argument("знаменатель не может быть равен нулю.");
    }
    num = a1;
    denom = b1;
    reduce();
}

void rational::show() const {
    cout << num << "/" << denom << endl;
}

rational rational::operator+(const rational& other) const {
    int new_num = num * other.denom + denom * other.num;
    int new_denom = denom * other.denom;
    rational result(new_num, new_denom);
    result.reduce();
    return result;
}

rational operator-(const rational& other1, const rational& other2) {
    int new_num = other1.num * other2.denom - other2.num * other1.denom;
    int new_denom = other1.denom * other2.denom;
    rational result(new_num, new_denom);
    result.reduce();
    return result;
}

void rational::operator++() {
    num = num + denom;
    reduce();
}

bool rational::operator==(const rational& other) const {
    return (num == other.num) && (denom == other.denom);
}

bool rational::operator>(const rational& other) const {
    return num * other.denom > other.num * denom;
}

rational& rational::operator=(const rational& other) {
    num = other.num;
    denom = other.denom;
    return *this;
}

void rational::reduce() {
    int gcd_ab = gcd(num, denom);
    num = num / gcd_ab;
    denom = denom / gcd_ab;
}