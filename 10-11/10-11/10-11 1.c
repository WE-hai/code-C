#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int fac = 1;
	printf("请输入一个数:");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("n<0，数据错误！");
	}
	for (i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("%d!=%d\n",n ,fac);
	return 0;
}