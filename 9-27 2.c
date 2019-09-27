#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = 0;
	int mid = 0;
right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };
	int k = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	printf("请输入要查找的数：");
	scanf("%d", &k);
	ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到结果！\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}
