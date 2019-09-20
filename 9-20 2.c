#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, i = 0;
	printf("请输入一个整数：");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	if (n%i == 0)
		break;
		if (i < n)
			printf("%d不是一个素数\n", n);
		else printf("%d是一个素数\n", n);
	return 0;
}