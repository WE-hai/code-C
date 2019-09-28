
#include<stdio.h>
int main()
{
	double i = 0, t = 0, sum = 0, sign= -1;
	for(i= 1;i <= 100;i++)
	{
		sign = -sign;
		t = sign / i;
		sum = sum + t;
	}
	printf("sum=%lf\n", sum);
	return 0;
}