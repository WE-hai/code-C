#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int flag = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + (1.0 / i)*flag;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}