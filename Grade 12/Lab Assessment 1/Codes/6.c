// 6. To confirm whether an integer input by a user is a PALINDROMIC number or not through ispalindrome().

#include <stdio.h>
int ispalindrome(int);

main(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if(ispalindrome(number) == 0){
		printf("%d is not a palindromic number.", number);
	}
	else{
		printf("%d is a palindromic number.", number);
	}
}

int ispalindrome(int num){
	int rev = 0, rem, temp;
	temp = num;
	while (num > 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if (temp == rev) return 1;
	else return 0;
}


