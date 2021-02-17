#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex c1;
	//Complex c2(3.0);
	Complex c2 = 3.0;
	Complex c3(3.0, 4.0);
	//Complex c4(c3);
	Complex c4 = c3;
	
	c1 = c3;	//c1.operator=(c3) or operator=(c1,c3)
	//c1.real(c3.real());
	//c1.imag(c3.imag());
	
	c1 = c3 = c4;	//daisy chain
	// c1.operator=(c3 = c4) --> c1.operator=(c3.operator=(c4))
	
	c2 = 4.0;
	
	
	c2 = c1 + c3;
	
	cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << endl;
	cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << endl;
	cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << endl;
	cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << endl;
	
	
	cout << c1; // cout.operator<<(c1) or ::operator<<(cout, c1)
	
	
	if (c1==c3)//c1.real() == c3.real() && c1.imag() == c3.imag()
		cout << "c1 and c3 are equal" <<endl;
	else
		cout << "c1 and c3 are not equal" <<endl;
	
	const Complex c5(3.0, 4.0);
	//c5.real(5.0);
	double re = c5.real();
	
	return 0;
}
