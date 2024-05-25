// 5. To calculate sum of digits of an integer input by a user through sumdigit()

#include <stdio.h>
int sumdigit(int);

main(){
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("The sum of digits of %d is %d.", number, sumdigit(number));
}

int sumdigit(int n){
	int sum = 0;
	while (n != 0){
		sum = sum + n % 10;
		n = n/10;
	}
	return sum;
}


