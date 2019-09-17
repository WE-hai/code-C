//#include<stdio.h>
//int main()
//{
//	/*short n = 101;
//	short i = 2;
//	short k = 0, m = 0;
//	for (n = 101; n <= 200; n = n + 2)
//	{
//		k = sqrt(n);
//		for (i = 2; i <= k; i++)
//		if (n%i == 0)break;
//		if (i >= k + 1)
//		{
//			printf("%d ", n);
//			m = m + 1;
//		}
//		if (m % 10 == 0)
//			printf("\n");
//	}
//	printf("\n");*/
//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdlib.h>
int main()
	{
			int year = 0;
			int i = 0;
			for (year = 1000; year <= 2000; year++)
			{
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				{
					printf("%7d", year);
					i++;
					if (i % 10 == 0)
					{
						printf("\n");
					}
				}
			}
			return 0;
		}

