#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}
int main()
{
	char arr[] = "hello world!";
	int ret = 0;
	ret = my_strlen(arr);		
	printf("%d\n", ret);
	return 0;
}