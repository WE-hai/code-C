#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a = 3.67, b = 5.43, c = 6.21;
	double s = 0;
	double area = 0;
	printf("a = %lf\tb = %lf\tc = %lf\n", a, b, c);
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("area=%lf\n",area);
	return 0;
}