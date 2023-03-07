class rational {
public:
    explicit rational(int a1 = 0, int b1 = 1);
    void set_rational(int a1, int b1);
    void show() const;
    rational operator+(const rational& other) const;
    friend rational operator-(const rational& f1, const rational& f2);
    void operator++();
    bool operator==(const rational& other) const;
    bool operator>(const rational& other) const;
    rational& operator=(const rational& other);
    void reduce();
private:
    int num, denom;
};