#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int a1 = 1;
	int a2 = 1;
	int i = 0;
	int sum = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	if (n < 3)
	{
		sum = 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			sum = a1 + a2;
			a1 = a2;
			a2 = sum;
		}
	}
	printf("%d\n", sum);
	return 0;
}