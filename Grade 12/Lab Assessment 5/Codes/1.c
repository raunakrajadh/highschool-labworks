#include <stdio.h>
int main(){
	int a = 10;
	int *ptr;

	ptr = &a;

	printf("The value of a is %d\n", a);
	printf("The address of a is %p\n", &a);
	printf("The value of ptr is %p\n", ptr);
	printf("The value of *ptr is %d\n", *ptr);
}

