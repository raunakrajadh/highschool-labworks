// 12. To calculate factorial value of a positive integer given by a user through factorial()

#include <stdio.h>
int factorial(int);

main(){
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("The factorial of %d is %d.", num, factorial(num));
}

int factorial(int n){
	int a = 1;
	do{
		a = a*n;
		n = n-1;
	}
	while(n>0);
	return(a);
}


