#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("*****  1、进入游戏  *****\n");
	printf("*****  0、退出游戏  *****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入要猜的数字：");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了，请再猜一次!\n");
		}
		else if (ret < guess)
		{
			printf("猜大了，请再猜一次!\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：0/1\t");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}