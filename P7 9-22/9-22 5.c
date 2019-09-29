#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 1;
	int sum = 0;
	int k = 0;
	scanf("%d", &k);
	for (n = 1; n <= k; n++)
	{
		m = m*n;
		sum = sum + m;
	}
	printf("sum = %d\n", sum);
	return 0;
}