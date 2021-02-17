#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	Rational r1;
	//Rational r2(3);
	Rational r2 = 3;
	Rational r3(3,4);
	Rational r4 = r3;
	
	r1=r3;				// r1.operator(r3) or :: operator=(r1, r3);
	
	//r1.setNum(r3.getNum());
	//r1.setDen(r3.getDen());
	
	r2 = r1 + r3;
	cout << r1;
	
	cout << "r1 : " <<r1.getNum() << "/" << r1.getDen() << endl;
	cout << "r2 : " <<r2.getNum() << "/" << r2.getDen() << endl;
	cout << "r3 : " <<r3.getNum() << "/" << r3.getDen() << endl;
	cout << "r4 : " <<r4.getNum() << "/" << r4.getDen() << endl;
	
	if (r1 == r3)
		cout << "r1 and r3 are equal" << endl;
	else
		cout << "r1 and r3 are not equal" << endl;
	
	return 0;
}
