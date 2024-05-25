#include <stdio.h>
int main()
{
	int a = 10;
	int *ptr;
	int **ptrptr;
	ptr = &a;
	ptrptr = &ptr;

	printf("Value of a = %d\n", a);
	printf("Value of *ptr = %d\n", *ptr);
	printf("Value of **ptrptr = %d\n", **ptrptr);
}

