#include <stdio.h>
int main(){
	int a, b;
	int *ptr1, *ptr2;
	float avg;

	printf("Enter two integers: "); scanf("%d %d", &a, &b);
	ptr1 = &a;
	ptr2 = &b;
	avg = (*ptr1 + *ptr2) / 2.0;
	printf("Average of %d and %d is: %.2f", *ptr1, *ptr2, avg);
}

