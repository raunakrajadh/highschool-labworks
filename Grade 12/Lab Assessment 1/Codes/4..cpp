// 4. To generate reverse value of an integer given by a user through reverseno().

#include <stdio.h>
int reverseno(int);

main(){
	int number;
	printf("Enter a number to reverse: ");
	scanf("%d", &number);
	printf("The reverse of %d is %d", number, reverseno(number));	
}

int reverseno(int n)
{
	int rev = 0;
	while(n > 0){
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return(rev);
}


