#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	printf("a=%d b=%d\n"); 
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n");
	return 0;
}