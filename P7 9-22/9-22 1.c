//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int A[10];
//	int B[10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int* p1[10] = { &A[10] };
//	int* p2[10] = { &B[10] };
//	int q[10];
//	printf("请输入数组A:");
//	for (i = 0; i < 10; i++,k++)
//	{
//		scanf("%d", &A[i]);
//		printf("%d ", A[i]);
//		q[k] = *p1[i];
//	}
//	printf("\n请输入数组B:");
//	for (j = 0; j < 10; j++,i++)
//	{
//		scanf("%d", &B[j]);
//		printf("%d ", B[j]);
//		*p1[i] = *p2[j];
//	}
//	for (k = 0; k < 10; k++, j++)
//	{
//		*p2[j] = q[k];
//	}
//	printf("\n数组A：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n数组B：");
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", B[j]);
//	}
//	return 0;
//}