// 15. To display a multiplication table of a positive integer input by a user through mult_table().

#include <stdio.h>
void mult_table(int);

main(){
	int n;
	printf("Enter a number to display multiplication table of: ");
	scanf("%d", &n);
	printf("\nMultiplication Table of %d:\n", n);
	mult_table(n);
}

void mult_table(int num){
	int i;
	for(i=1; i<=10; i++){
		printf("%d * %d = %d\n", num, i, num*i);
	}
}


