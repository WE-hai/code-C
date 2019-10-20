#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 2;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}

}
int main()
{
	int ret = 0;
	ret = fib(8);
	printf("%d\n", cnt);
	return 0;
}