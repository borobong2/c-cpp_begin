#include <stdio.h>

int main(void)
{
	char str[4];
	str[0] = 65;
	str[1] = 66;
	str[2] = 67;
	str[3] = 0;

	str[0] = 'A';
	str[0] = 'B';
	str[0] = 'C';
	str[0] = '\0';	// null character

	
	printf("str:%s\n", str);
	//printf("str: %s\n", &str[0]);
	
	printf("str + 1 : %s\n", str+1);
	
	//char str2[4] = {'A', 'B', 'C', '\0'};
	//char str2[4] = "ABC";

	char str2[] = "ABC";

	printf("str2: %s\n", str2);

	return 0;
}
