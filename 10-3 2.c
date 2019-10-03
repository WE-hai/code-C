#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int runyear(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	ret = runyear(year);
	if (ret == 1)
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}