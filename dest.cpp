#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* pdest1, int*pdest2)
{
	int temp;
	temp = *pdest1;
	*pdest1 = *pdest2;
	*pdest2 = temp;
}
int main()
{
	int a = 5, b = 6;
	int* p1, * p2;
	p1 = &a, p2 = &b;
	printf("a=%d,b=%d\n", a, b);
	if (a < b)
	{
		swap(p1, p2);
	}
	printf("a=%d,b=%d\n", a, b);
}