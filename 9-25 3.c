#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int a[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
			else if (a[mid]<k)
			{
				left = mid + 1;
			}
			else
			{
				return mid;
			}
	}
	return -1;
}
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int k = 0;
	int n = 0;
	int sz = 0;
	sz = sizeof(a) / sizeof(a[0]);
	scanf("%d", &k);
	n = binary_search(a,k,sz);
	if (n == -1)
	{
		printf("没找到！\n");
	}
	else
	{
		printf("找到了，下标是：%d\n",n);
	}
	return 0;
}