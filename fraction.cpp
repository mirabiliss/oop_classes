#include "fraction.h"

void Fraction::add_obj_qnt()
{
    objects++;
}

unsigned Fraction::get_objets_qnt()
{
    return objects;
}

Fraction::Fraction()
{
    this->num = 0;
    this->den = 1;
}

Fraction::Fraction(int num, int den)
{
    this->num = num;
    this->den = den;
}

Fraction::Fraction(int num)
{
    this->num = num;
    this->den = 1;
}

int Fraction::getNum() const
{
    return num;
}

void Fraction::setNum(int value)
{
    num = value;
}

int Fraction::getDen() const
{
    return den;
}

void Fraction::setDen(int value)
{
    den = value;
}

Fraction Fraction::operator+(const Fraction &other) const
{
    return this->add(other);
}

Fraction Fraction::operator-(const Fraction &other) const
{
    return this->subtract(other);
}

Fraction Fraction::operator*(const Fraction &other) const
{
    return this->multiply(other);
}

Fraction Fraction::operator/(const Fraction &other) const
{
    return this->divide(other);
}

void Fraction::operator!()
{
    this->turn();
}

void Fraction::operator<<(QTextEdit **from)
{
    this->num = from[0]->toPlainText().toInt();
    this->den = from[1]->toPlainText().toInt();
}

void Fraction::operator>>(QTextEdit **to)
{
    to[0]->setText(QString::number(this->num));
    to[1]->setText(QString::number(this->den));
}

bool Fraction::operator>(const Fraction &other)
{
    return ((this->num / this->den) > (other.num / other.den));
}

bool Fraction::operator<(const Fraction &other)
{
    return ((this->num / this->den) < (other.num / other.den));
}

bool Fraction::operator==(const Fraction &other)
{
    return ((this->num / this->den) == (other.num / other.den));
}

bool Fraction::operator!=(const Fraction &other)
{
    return ((this->num / this->den) != (other.num / other.den));
}

Fraction Fraction::add(const Fraction &other) const
{
    Fraction res(this->getNum() * other.getDen() +
                 other.getNum() * this->getDen(),
                 this->getDen() * other.getDen());
    res.cut();
    return res;
}

Fraction Fraction::add(const Fraction &first, const Fraction &second) const
{
    Fraction res(this->getNum() * first.getDen() * second.getDen() +
                 first.getNum() * this->getDen() * second.getDen() +
                 second.getNum() * this->getDen() * first.getDen(),
                 this->getDen() * first.getDen() * second.getDen());
    res.cut();
    return res;
}

Fraction Fraction::subtract(const Fraction &other) const
{
    Fraction res(this->getNum() * other.getDen() -
                 other.getNum() * this->getDen(),
                 this->getDen() * other.getDen());
    res.cut();
    return res;
}

Fraction Fraction::subtract(const Fraction &first, const Fraction &second) const
{
    Fraction res(this->getNum() * first.getDen() * second.getDen() -
                 first.getNum() * this->getDen() * second.getDen() -
                 second.getNum() * this->getDen() * first.getDen(),
                 this->getDen() * first.getDen() * second.getDen());
    res.cut();
    return res;
}

Fraction Fraction::multiply(const Fraction &other) const
{
    Fraction res(this->getNum() * other.getNum(),
                 this->getDen() * other.getDen());
    res.cut();
    return res;
}

Fraction Fraction::multiply(const Fraction &first, const Fraction &second) const
{
    Fraction res(this->getNum() * first.getNum() * second.getNum(),
                 this->getDen() * first.getDen() * second.getDen());
    res.cut();
    return res;
}

Fraction Fraction::divide(const Fraction &other) const
{
    Fraction second = other;
    second.turn();
    Fraction res = this->multiply(second);
    return res;
}

Fraction Fraction::divide(const Fraction &first, const Fraction &second) const
{
    Fraction f = first;
    f.turn();
    Fraction s = second;
    s.turn();
    Fraction res = this->multiply(f, s);
    return res;
}

int find_gcd(int a, int b){
    a = abs(a);
    b = abs(b);
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if (a == b)
        return a;
    else if (a > b)
        return find_gcd(a - b, b);
    else
        return find_gcd(a, b - a);
}

void Fraction::cut()
{
    int gcd = find_gcd(this->getNum(), this->getDen());
    Fraction res(this->getNum() / gcd, this->getDen() / gcd);
    this->setNum(res.getNum());
    this->setDen(res.getDen());
}

void Fraction::turn()
{
    Fraction res(this->getDen(), this->getNum());
    this->setNum(res.getNum());
    this->setDen(res.getDen());
}
