#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational;
std::ostream& operator<<(std::ostream& out, const Rational& rhs);
Rational operator+(const Rational& lhs, const Rational& rhs);
Rational operator-(const Rational& lhs, const Rational& rhs);

class Rational{
private:
	int num;
	int den;
	
public:
	//Rational();
	//Rational(int num);
	Rational(int num = 0, int den = 1);
	Rational(const Rational &rhs);
	~Rational();
	
	Rational& operator=(const Rational &rhs);
	// +=, -=, *-, /=
	
	bool operator==(const Rational &rhs) const;
	// !=, <, >, <=, >=
	
	void setNum(int num);
	void setDen(int den);
	
	int getNum() const;
	int getDen() const;

};

#endif
