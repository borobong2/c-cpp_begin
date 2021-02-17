#include <iostream>
using namespace std;

void swap(int &ra, int &rb)
{
	int tmp;
	tmp = ra;
	ra= rb;
	rb=tmp;
}

int main()
{
	int a = 100;
	int b = 200;
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	swap(a,b);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}
