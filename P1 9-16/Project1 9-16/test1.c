#include<stdio.h>
#include<math.h>
int main()
{
	short n = 1;
	short i = 0;
	short m = 0;
	for (n = 1; n <= 9; n++)
		m = n*(n + 1);
	printf("%d*%d=%d/n", n,n+1,m);
	return 0;
}