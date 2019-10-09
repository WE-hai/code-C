#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int strlen(char* arr)
{
	if (*arr)
	{
		return 1 + strlen(arr + 1);
	}
	return 0;
}
int main()
{
	char arr[] = "hello world";
	printf("%d\n", strlen(arr));
	return 0;
}