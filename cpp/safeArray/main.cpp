#include <iostream>
#include "safeArray.h"

int main()
{
	SafeArray arr1;
	SafeArray arr2(10);
	
	int nums[] = {1,2,3,4,5};
	
	SafeArray arr3(nums, 5);
	SafeArray arr4(arr3);
	arr1 = arr3;
	
	if (arr1 == arr3)
		std::cout << "arr1 and arr3 are equal" << std::endl;
	else
		std::cout << "arr1 and arr3 are not equal" << std::endl;
		
	Array arr5(nums, 5);
	for (int i = 0; i <= arr5.size(); ++i)
		std::cout << arr5[i] << std::endl;
	
	//for (int i = 0; i <= arr1.size(); ++i)
	//	std::cout << arr1[i] << std::endl;
 
 	Array *pArr = new SafeArray(nums, 5);
	
	(*pArr)[5] = 5;		//(*pArr).operator[](5) or pa
	
	return 0;
}
