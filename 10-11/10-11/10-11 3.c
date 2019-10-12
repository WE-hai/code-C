#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int arr[10])
{
	int i = 0;
	int m = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (m>=arr[i])
		{
			m;
		}
		else
		{
			m = arr[i];
		}
	}
	return m;
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int ret = 0;
	printf("ÇëÊäÈë10¸öÊı£º");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	ret = max(arr);
	printf("max=%d\n", ret);
	return 0;
}