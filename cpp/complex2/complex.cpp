#include "complex.h"

/*
Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0.0;
}
*/
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex &rhs)
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

int Complex::operator==(const Complex &rhs)
{
	//if(this->re == rhs.re && this->im == rhs.im)
	//	return 1;
	//else
	//	return 0;
		
	return(this->re == rhs.re && this->im ==rhs.im);
}

Complex Complex::operator+(const Complex &rhs)
{
	Complex result(this->re + rhs.re, this->im + rhs.im);
	
	return result;
}

Complex Complex::operator-(const Complex &rhs)
{
	Complex result(this->re - rhs.re, this->im - rhs.im);
	
	return result;
}
void Complex::real(double re)
{
	this->re = re;	
}

void Complex::image(double im)
{
	this->im = im;
}

double Complex::real()
{
	return this->re;
}

double Complex::imag()
{
	return this->im;
}
