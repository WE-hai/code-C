#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 13;
	int b = 13;
	int i = 0;
	int j = 0;
	for (i = 1; i <= a; i++)
	{
		if (i < 7)
		{
			for (j = 1; j <= b; j++)
			{
				if (7 - (i - 1) <= j&&j <= 7 + (i - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else
		{
			for (j = 1; j < b; j++)
			{
				if (7 - (a - i) <= j&&j <= 7 + (a - i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}