#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	out << "(" << rhs.re << ", "  << rhs.im <<"i)" << std::endl;
	//out << "(" << rhs.real() << ", " << rhs.imag() << "i" <<")"<< std::endl;
	
	return out;
}

Complex operator+(const Complex& lhs, const Complex& rhs)
{
	return Complex(lhs.re + rhs.re, lhs.im + rhs.im);
}

Complex operator-(const Complex& lhs, const Complex& rhs)
{
	return Complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

/*
Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0;
}
*/
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex & rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
}

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex &rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
	
	return *this;
}

bool Complex::operator==(const Complex &rhs) const
{
	//if (this->re == rhs.re && this->im == rhs.im)
	//	return true;
	//else
	//	return false;
	return (this->re == rhs.re && this->im == rhs.im);
}
/*
Complex Complex::operator+(const Complex& rhs)
{
	Complex result(this->re + rhs.re, this->im + rhs.im);
	
	return result;
}

Complex Complex::operator-(const Complex& rhs)
{
	return Complex(this->re - rhs.re, this->im - rhs.im);
	
	//return result;
}
*/
void Complex::real(double re)
{
	this->re =re;
}

void Complex::imag(double im)
{
	this->im=im;
}

double Complex::real() const
{
	return this->re;
}

double Complex::imag() const
{
	return this->im;
}
