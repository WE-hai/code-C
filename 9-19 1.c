#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	printf("请输入2个数：");
	scanf("%d %d", &a, &b);
	for (i = a; i >0; i--)
	{
		if(a%i == 0&&b%i==0)
			break;
	}
	printf("最大公约数是：%d\n", i);
	return 0;
}