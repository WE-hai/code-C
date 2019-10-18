#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for(i=1; i<=1000000; i++)
	{
		//判断i是否为水仙花数
		//1. 算i的位数-n
		int sum = 0;
		int n = 0;
		int tmp = i;
		while(tmp)
		{
			n++;
			tmp/=10;
		}
		//2. 计算i的每一位的n次方之和
		tmp = i;
		while(tmp)
		{
			sum += (int)pow(tmp%10, n);
			tmp/=10;
		}
		//3. 比较
		if(sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}