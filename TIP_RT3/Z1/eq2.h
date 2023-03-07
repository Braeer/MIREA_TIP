class eq2 {
private:
    double a, b, c;
    double D;
public:
    eq2(double a1, double b1, double c1);
    void set_eq2(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x);
    eq2 operator+(const eq2& other) const;
};
