#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int strlen(char* arr)
{
	int i = 0;
	while (*arr != 0)
	{
		i++;
		arr++;
	}
	return i;
}
int main()
{
	char arr[] = "hello world";
	printf("%d\n", strlen(arr));
	return 0;
}