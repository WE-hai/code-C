#include<stdio.h>
int main()
{
	int year = 1000;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
				printf("%d ", year);
		}
		if (year % 400 == 0)
			printf("%d ", year);
	}
	printf("\n");
	return 0;
}