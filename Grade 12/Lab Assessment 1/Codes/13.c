// 13. To calculate factorial value of a positive integer given by a user through a recursive function named fact().

#include <stdio.h>
int fact(int);

main(){
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	printf("The factorial of %d is %d.", num, fact(num));
}

int fact(int n){
	if(n == 0) return(1);
	else return n * fact(n - 1);
}


