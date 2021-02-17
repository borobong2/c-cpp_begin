#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	Rational r1;		// 0/1
	Rational r2(3);		// 3/1
	Rational r3(3, 4);	// 3/4
	
	r1.num(r3.num());
	r1.den(r3.den());
	
	cout <<"r1 : " << r1.num() << "/" << r1.den() << endl;
	cout <<"r2 : " << r2.num() << "/" << r2.den() << endl;
	cout <<"r3 : " << r3.num() << "/" << r3.den() << endl;
	
	//if (r1 == r3)
	if (r1.num() == r3.num() && r1.den() == r3.den())
		cout << "r1 and r3 are equal" << endl;
	else
		cout << "r1 and r3 arre not equal" << endl;
	
	return 0;
}
