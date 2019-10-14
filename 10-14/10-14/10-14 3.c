#include<stdio.h>
int main()
{
	//NULL; 0 \0  '0'
	int a = 100;
	struct S2 s2 = {{1,2,3}, &a, {20, 'q'}, 3.14};
	struct S2* ps = &s2;
	printf("%c\n", s2.s.c);
	printf("%c\n", ps->s.c);
	printf("%d\n", *(s2.p));
	printf("%d\n", *(ps->p));

	return 0;
}