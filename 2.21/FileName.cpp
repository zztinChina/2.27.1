#include<stdio.h>
int my_strcmp(const char* arr1, const char* arr2)
{   
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		return 0 ;
		arr1++;
		arr2++;
	}
	
		return *arr1 - *arr2;
}
int main()
{
	char arr1[] = { "bsdees" };
	char arr2[] = "c";
 int rel=	my_strcmp(arr1, arr2);
 printf("%d", rel);
 return 0;



	return 0;
}