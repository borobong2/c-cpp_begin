#include <iostream>
#include "date.h"

using namespace std;

void printDate(const Date &rd)
{
	cout << "(" << rd.year << "/" << rd.month << "/" << rd.day << ")" <<endl;
}
