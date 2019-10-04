#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int m = 1;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = m*i;
	}
	printf("n!=%d\n", m);
	return 0;
}