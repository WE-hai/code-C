#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int swap(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return *x, *y;
}
int main()
{
	int a = 2;
	int b = 3;
	int ret = 0;
	printf("a=%d b=%d\n", a, b);
	ret = swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}