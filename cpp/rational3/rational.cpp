#include "rational.h"
/*
Rational::Rational()
{
	this->num = 0;
	this-> den = 1;
}

Rational::Rational(int num)
{
	this->num = num;
	this->den = 1;
}
*/
Rational::Rational(int num, int den)
{
	this->num = num;
	this->den = den;
}

Rational::Rational(const Rational &rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
}

Rational::~Rational()
{

}

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	out << "(" << rhs.getNum() << ", " <<rhs.getDen() << "i" <<")" <<std::endl;
	
	return out;
}

Rational operator+(const Rational& lhs, const Rational& rhs)
{
	return Rational(lhs.getNum() + rhs.getNum(), lhs.getDen() + rhs.getDen());
}

Rational operator-(const Rational& lhs, const Rational& rhs)
{
	return Rational(lhs.getNum() - rhs.getNum(), lhs.getDen() - rhs.getDen());
}

Rational& Rational::operator=(const Rational &rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
	
	return *this;
}

bool Rational::operator==(const Rational &rhs) const
{
	return this->num == rhs.num && this->den == rhs.den;
}

void Rational::setNum(int num)
{
	this->num = num;	
}

void Rational::setDen(int den)
{
	this->den = den;
}

int Rational::getNum() const
{
	return this->num;
}

int Rational::getDen() const
{
	return this->den;
}
