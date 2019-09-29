#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d\t", j, i, j*i);
		    printf("\n");
	}
	return 0;
}