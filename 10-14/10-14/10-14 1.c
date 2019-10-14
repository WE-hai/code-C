#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= i)
			printf("%d ", i);
	}
}