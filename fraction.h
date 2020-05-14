#ifndef FRACTION_H
#define FRACTION_H

#include <QTextEdit>
#include <QMessageBox>
#include <QLineEdit>

class Fraction
{
public:
    static int objects;
    static void add_obj_qnt();
    static unsigned get_objets_qnt();

    Fraction();
    Fraction(int num, int den);
    Fraction(int num);

    Fraction add(const Fraction& other) const;
    Fraction add(const Fraction& first, const Fraction& second) const;
    Fraction subtract(const Fraction& other) const;
    Fraction subtract(const Fraction& first, const Fraction& second) const;
    Fraction multiply(const Fraction& other) const;
    Fraction multiply(const Fraction& first, const Fraction& second) const;
    Fraction divide(const Fraction& other) const;
    Fraction divide(const Fraction& first, const Fraction& second) const;

    void cut();
    void turn();

    int getNum() const;
    void setNum(int value);
    int getDen() const;
    void setDen(int value);


    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    void operator!();

    void operator<<(QTextEdit** from);
    void operator>>(QTextEdit** to);

    bool operator>(const Fraction& other);
    bool operator<(const Fraction& other);
    bool operator==(const Fraction& other);
    bool operator!=(const Fraction& other);

private:
    int num;
    int den;
};

#endif // FRACTION_H
