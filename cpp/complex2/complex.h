#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
private:
	double re;
	double im;
	
public:
	//Complex();								//default con
	//Complex(double re);						//convert con
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex &rhs);			//copy con
	~Complex();
	
	Complex& operator=(const Complex & rhs);
	int operator==(const Complex & rhs);
	Complex operator+(const Complex &rhs);
	Complex operator-(const Complex &rhs);
	void real(double re);
	void image(double im);
	
	double real();
	double imag();
};

#endif
