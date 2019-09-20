#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0, y = 0;
	int a = 0, b = 0, c = 0;
	int max(x, y);
	scanf("%d %d", &a, &b);
		c = max(a, b);
		printf("max=%d\n", c);
	return 0;
}
int max(x, y)
{
	int z = 0;
	if (x > y)
		z = x;
	else z = y;
	return(z);
}