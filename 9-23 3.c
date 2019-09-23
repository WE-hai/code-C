#include<stdio.h>
int main()
{
	double i = 1, t = 0, sum = 0, sign = -1;
	while(i <= 100)
	{
		sign = -sign;
		t = sign / i;
		sum = sum + t;
		i++;
	}
	printf("sum=%lf\n", sum);
	return 0;
}