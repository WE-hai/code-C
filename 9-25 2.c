#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*********************\n");
	printf("*****  1、play  *****\n");
	printf("*****  0、exit  *****\n");
	printf("*********************\n");
}
void game()
{
	int n = 0;
	int guess = 0;
	n = rand() % 100 + 1;
	while (1)
	{
		printf("请输入所猜数字：");
		scanf("%d", &guess);
		if (guess > n)
		{
			printf("猜大了！\n");
		}
		else if (guess<n)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int i = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择：0、1\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (i);
	return 0;
}