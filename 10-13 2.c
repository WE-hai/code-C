#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world!";
	int ret = 0;
	ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}