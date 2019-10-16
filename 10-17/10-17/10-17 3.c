#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0 / i;
		if (i % 2 == 1)
		{
			sum += 1.0 / i;
		}
		else
		{
			sum -= 1.0 / i;
		}
	}
	printf("%lf\n", sum);
	return 0;
}
