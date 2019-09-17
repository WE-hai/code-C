#include<stdio.h>
int main()
{
	int i = 100;
	int count = 0;
	while(i<=200)
	{
		int flag = 0;
		int j = 2;
		while(j<i)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}
			j++;
		}
		if(flag == 0)
		{
			count++;
			printf("%d ", i);
		}
		i++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}
