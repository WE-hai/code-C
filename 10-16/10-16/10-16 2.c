#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int flag = 1;
	double sum = 1;
	for (i = 1; i <= 100; i++)
	{
		flag = -flag;
		sum += flag*1.0 / (i + 1);
	}
	printf("sum=%lf\n", sum);
	return 0;
}