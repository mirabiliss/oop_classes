#ifndef FRACTION_H
#define FRACTION_H

#include <QTextEdit>
#include <QMessageBox>
#include <QLineEdit>

class Fraction
{
public:
    Fraction();
    Fraction(int num, int den);
    Fraction(int num);

    Fraction add(const Fraction& other);
    Fraction subtract(const Fraction& other);
    Fraction multiply(const Fraction& other);
    Fraction divide(const Fraction& other);
    void cut();
    void turn();

    int getNum() const;
    void setNum(int value);

    int getDen() const;
    void setDen(int value);

    int find_gcd(int a, int b);

private:
    int num;
    int den;
};

#endif // FRACTION_H
