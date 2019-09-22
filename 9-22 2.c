#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
		int i = 1;
		do
		{
			if(i == 5)
				break;
			printf("%d ", i);
			i++;
		}
		while(i<=10);
		return 0;
}