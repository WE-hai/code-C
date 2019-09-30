#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}