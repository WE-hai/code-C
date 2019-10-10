#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	tmp = a; 
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}