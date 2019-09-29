#include<stdio.h>
int main()
{
	int i = 1;
	while(i<=9)
	{
		int j = 1;
		while(j<=i)
		{
			printf("%d*%d=%d ", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}