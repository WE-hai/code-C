#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>      //youcuo
int main()
{
	int flag = 1;
	double i = 2;
	double sum = 1;
	while (i <= 100)
	{
		flag = -flag;
		sum = sum + (1 / i + 1)*flag;
	}
	printf("%lf\n", sum);
	return 0;
}