// 16. To check whether a positive integer input by a user is a  prime number or not through isprime()

#include <stdio.h>
int isprime(int);

main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	if(isprime(n)){
		printf("%d is a prime number.", n);
	}
	else{
		printf("%d is not a prime number.", n);
	}
}

int isprime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) return 0;	
	}
	return 1;
}


