#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i = 0;
	int j = 0;
	int max = 0;
	printf("ÇëÊäÈë10¸öÊı£º");
	for (i = 0; i < 9; i++)
	{
		scanf("%d ", &a[i]);
	}
	max = a[0];
	for (j = 0; j < 9; j++)
	{
		if (a[j]>max)
			max = a[j];
	}
	printf("max=%d\n", max);
	return 0;
}