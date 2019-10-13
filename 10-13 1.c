#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (my_strlen(str + 1) + 1);
	}
}
int main()
{
	char arr[] = "hello world!";
	int ret = 0;
	ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}