#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void chengfa(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("������һ������");
	scanf("%d", &n);
	chengfa(n);
	return 0;
}