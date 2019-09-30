#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	int i = 0;
	int m = 1;
	for (i = 1; i <= n; i++)
	{
		m = m*i;
	}
	return m;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = fac(n);
	printf("n!=%d\n", ret);
	return 0;
}