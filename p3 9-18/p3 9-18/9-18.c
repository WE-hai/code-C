#define _CAR_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}
