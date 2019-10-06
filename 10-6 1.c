#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	printf("%d\n", fib(num));
	return 0;
}