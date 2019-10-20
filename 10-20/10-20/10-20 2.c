#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	int z = 0;
	int t1 = 1;
	int t2 = 1;
	printf("请输入两个数：");
	scanf("%d%d", &x, &y);
	z = x*y;
	if (x >= y)
	{
		for (i = 1; i <= y; i++)
		{
			if (y%i == 0)
			{
				if (x%i == 0)
				{
					t1 = i;
				}
			}
		}
		z = z / t1;
	}
	else
	{
		for (i = 1; i <= x; i++)
		{
			if (x%i == 0)
			{
				if (y%i == 0)
				{
					t2 = i;
				}
			}
		}
		z = z / t2;
	}
	printf("%d\n", z);
	return 0;
}