#include <iostream>

using namespace std;

int main()
{
	cout << "hello, World" << endl;
	
	//cout << "hello, World";
	//cout.operator<<("hello, World");
	::operator<<(cout, "hello, World");
	
	
	//cout << endl;
	cout.operator<<(endl);
	//operator<<(cout, endl);
	
	::operator<<(cout, "hello, World").operator<<(endl);
	return 0;
}

