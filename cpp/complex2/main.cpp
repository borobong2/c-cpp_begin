#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	Complex c1;
	
	//Complex c2(3.0);
	Complex c2 = 3.0;
	Complex c3(3.0, 4.0);
	//complex c4(&c3);
	Complex c4 = c3;
	
	Complex c5;
	c5 = c3; //c5.operator=(c3); or ::operator=(c5,c3);
	
	//c5.real(c3.real());
	//c5.image(c3.imag());
	//c5 = c4 = c3; daisy-chain ???
	
	c1 = 3.0;		// c1.operator=(3.0) or ::operator=(c1, 3.0)
	//Complex temp(3.);
	//c1.operator=(temp);
	//temp.~Complex();
	
	c5 = c2 + c3;	// c2.operator=(c3) or ::operator+(c2, c3)
	// c5.operator=(c2 + c3) -> c5.operator=(c2.operator+(c3))
	// ::operator = (c5, c2 + c3) -> ::operator=(c5, ::operator+(c2,c3))
	
	
	cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << endl;
	cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << endl;
	cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << endl;
	cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << endl;
	cout << "c5 : (" << c5.real() << ", " << c5.imag() << "i)" << endl;
	
	c3 == c5; // c3.operator ==(c5) or ::operator==(c3, c5)
	
	if (c3.real() == c5.real() && c3.imag() == c5.imag())
		cout << "c3 and c5 are equal" << endl;
	else
		cout << "c3 and c5 are not equal" << endl;
		
	return 0;
}
