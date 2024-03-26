#ifndef Number_h
#define Number_h

class Number {
private:
    char* value;
    int base;
    int digitsCount;

public:
    Number(const char* value, int base);
    Number(int value);
    Number(const Number& other); // copy constructor
    Number(Number&& other) noexcept; // move constructor
    ~Number();

    Number& operator=(const Number& other); // copy assignment operator
    Number& operator=(Number&& other) noexcept; // move assignment operator

    friend Number operator+(const Number& lhs, const Number& rhs);
    friend Number operator-(const Number& lhs, const Number& rhs);

    char& operator[](int index);

    bool operator>(const Number& other) const;
    bool operator<(const Number& other) const;
    bool operator>=(const Number& other) const;
    bool operator<=(const Number& other) const;
    bool operator==(const Number& other) const;
    bool operator!=(const Number& other) const;

    void SwitchBase(int newBase);
    void Print() const;
    int GetDigitsCount() const;
    int GetBase() const;

    Number& operator--(); // prefix decrement
    Number operator--(int); // postfix decrement
};

#endif
