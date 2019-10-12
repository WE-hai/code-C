#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	int f = 0;
	if (n == 1 || n == 0)
	{
		f = 1;
	}
	else if (n<0)
	{
		printf("n<0,数据错误！");
	}
	else
	{
		f = fac(n - 1)*n;
	}
	return f;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d != %d\n", n, ret);
	return 0;
}