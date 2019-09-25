#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	printf("«Î ‰»Î√‹¬Î£∫\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "12345678") == 0)
		{
			printf("µ«¬º≥…π¶£°\n");
			break;
		}
		else
		{
			printf("√‹¬Î¥ÌŒÛ£¨«Î÷ÿ–¬ ‰»Î£°\n");
		}
	}
	if (i == 3)
		{
			printf("µ«¬Ω ß∞‹£°\n");
		}
	return 0;
}