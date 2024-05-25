#include <stdio.h>
int main(){
	int a, b;
	int *p1, *p2;

	printf("Enter two integers: "); scanf("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	if(*p1 > *p2) printf("%d is greater than %d", *p1, *p2);
	else printf("%d is greater than %d", *p2, *p1);
}

