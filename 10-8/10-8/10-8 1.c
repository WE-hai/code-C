#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	else
	{
		return n;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}