#include <iostream>
#include "date.h"

int main()
{
	Date today;
	today.year = 2021;
	today.month = 1;
	today.day = 13;
	
	Date birthday = {2005, 9, 4};
	
	//printDate(&today);
	printDate(today);
	
	return 0;
}
