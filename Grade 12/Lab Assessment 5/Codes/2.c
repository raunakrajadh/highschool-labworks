#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	
	printf("Before swapping: a = %d, b = %d\n", a, b);
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("After swapping: a = %d, b = %d\n", a, b);
}

