#include "myString.h"

int my_strlen(const char *str) {

	//int count = 0;
	
	int i;
	
	/*
	for(i = 0; str[i] != '\0'; ++i)
	{
		//++count;
		;
	}
	*/
	
	for (i = 0; str[i] ; ++i)
		;
	
	
	return i;
}

void my_strcpy(char *des, const char *src)
{
	int i;
	for (i = 0; src[i] /*!= '\0'*/; ++i)
		des[i] = src[i];
		
	des[i] = '\0';
}

int my_strcmp(const char *s1, const char *s2)
{
	int i;
	for (i =0; s1[i] != '\0' || s2[i] != '\0' || s1[i] != s2[i]; ++i)
		;
	
	return s1[i] - s2[i];
}
/*
void my_strcat(char *des, const char *src)
{
	int i;
	for (i = 0; des[i] != '\0'; ++i)
		;
		
	int j;
	for(j = 0; src[j] != '\0'; ++j)
		des[i + j] = src[j];
		
	des[i+j] = '\0';
}
*/
void my_strcat(char *des, const char *src)
{
	my_strcpy(des + my_strlen(des), src);
}
