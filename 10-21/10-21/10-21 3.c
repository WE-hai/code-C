#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char grade; 
	printf("请输入成绩分段：");
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A':
		printf("分数区间：90——100\n");
		break;
	case 'B':
		printf("分数区间：80——89\n");
		break;
	case 'C':
		printf("分数区间：70——79\n");
		break;
	case 'D':
		printf("分数区间：60——69\n");
		break;
	case 'E':
		printf("分数区间：< 60（不及格）\n");
		break;
	default:
		printf("输入错误！\n");
		break;
	}
	return 0;
}