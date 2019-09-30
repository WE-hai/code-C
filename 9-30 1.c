#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int x, int y)
{
	return (x,y) ? (x) : (y);
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	scanf("%d%d", &a, &b);
	ret = max(a, b);
	printf("max=%d\n", ret);
	return 0;
}