#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cifang(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*cifang(n, k - 1);
	}
}
int main()
{
	int x = 0;
	int y = 0;
	printf("请输入两个数：");
	scanf("%d%d", &x, &y);
	printf("%d^%d=%d\n", x, y, cifang(x, y));
	return 0;
}