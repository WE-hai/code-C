#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)
{
	int pre = 0;
	int next = 0;
	int jieguo = pre = 1;
	while (n > 2)
	{
		n = n - 1;
		next = pre;
		pre = jieguo;
		jieguo = pre + next;
	}
	return jieguo;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}