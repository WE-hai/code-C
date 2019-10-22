#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float add(float x, float y)
{
	return x + y;
}
int main()
{
	float a = 0;
	float b = 0;
	float ret = 0;
	printf("请输入两个数：");
	scanf("%f%f", &a, &b);
	ret = add(a, b);
	printf("%f+%f=%f\n", a, b, ret);
	return 0;
}