#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	return fac(n - 1)*n;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = fac(n);
	printf("%d!=%d\n", n, ret);
	return 0;
}