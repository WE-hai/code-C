#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch;
	printf("ÇëÊäÈë×Ö·û£º\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch>='a'&&ch<='z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}