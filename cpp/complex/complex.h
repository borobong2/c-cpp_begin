#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re; // real part
	double im; // imagenary
public:
	Complex();						// defualt constructor
	Complex(double re);				// convert constructor
	Complex(double re, double im);	// ordinary con.
	~Complex();						// destructor
	
	void real(double re);
	void imag(double im);
	
	double real();
	double imag();
	
};

#endif
