#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int d = 0;
	printf("ÇëÊäÈë3¸öÊı£º");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		d = a;
		a = b;
		b = d;
	}
	if (a < c)
	{
		d = c;
		c = b;
		b = a;
		a = d;
	}
	printf("%d<%d<%d\n",c,b,a );
	return 0;
}