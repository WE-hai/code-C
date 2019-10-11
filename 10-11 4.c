#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void da(int* x, int* y, int* z)
{
	int tmp = 0;
	if (x < y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
	}
	if (x < z)
	{
		tmp = *x;
		*x = *z;
		*z = tmp;
	}
	if (y < z)
	{
		tmp = *y;
		*y = *z;
		*z = tmp;
	}
	printf("%d %d %d\n", *x, *y, *z);
}
void xiao(int* x, int* y, int* z)
{
	int tmp = 0;
	if (x > y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
	}
	if (x > z)
	{
		tmp = *x;
		*x = *z;
		*z = tmp;
	}
	if (y > z)
	{
		tmp = *y;
		*y = *z;
		*z = tmp;
	}
	printf("%d %d %d\n", *x, *y, *z);
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int input = 0;
	printf("请输入要排列的三个数：");
	scanf("%d%d%d", &a, &b, &c);
	while (input)
	{	
		printf("请选择排列方式：\n1、从大到小\n2、从小到大\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			da(&a, &b, &c);
			break;
		case 2:
			xiao(&a, &b, &c);
			break;
		default:
			printf("输入错误，请重新输入！");
			break;
		}
	}
	return 0;
}