#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	printf("请输入一个数：");
	scanf("%d", &line);//7
	//上部分
	for(i=0; i<line; i++)
	{
		//打印一行
		//打印空格
		int j = 0; 
		for(j=0; j<line-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下部分
	for(i=0; i<line-1; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for(j=0; j<i+1; j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
