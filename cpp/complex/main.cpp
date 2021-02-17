#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex c1;				// (0.0, 0.0)
	//Complex c2(3.0);		// (3.0, 0.0)
	Complex c2 = 3.0;
	Complex c3(3.0, 4.0);	// (3.0, 4.0)
	
	
	c1.real(3.0);
	c1.imag(4.0);
	
	cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << endl;
	cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << endl;
	cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << endl;
	
	Complex c4;
	//c4 = c1+c2;
	c4.real(c1.real() + c2.real());
	c4.imag(c1.imag() + c2.imag());
	
	cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << endl;
	
	//if (c1 == c3)
	if(c1.real() == c3.real() && c1.imag() == c3.imag())
		cout << "c1 and c3 are equal" << endl;
	else
		cout << "c1 and c3 are not equal" << endl;
	
	return 0;
}
