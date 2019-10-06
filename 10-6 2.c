#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int a = 0;
	int a1 = 1, a2 = 1;
	printf("请输入一个数：");
	scanf("%d", &n);
	if (n <= 2)
	{
		a = 1;
	}
	else
	{
		while (n > 2)
		{
			a = a1 + a2;
			a1 = a2;
			a2 = a;
			n--;
		}
	}
	printf("%d\n", a);
	return 0;
}