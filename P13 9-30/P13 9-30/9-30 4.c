#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac2(int n)
{
	int m = 1;
	while (n > 1)
	{
		m = m*n;
		n = n - 1;
	}
	return m;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = fac2(n);
	printf("n!=%d\n", ret);
	return 0;
}