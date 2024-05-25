// 14. To display Fibonacci series like 1,1,2,3,5,8,13,21,34,55 .... Upto 25th term using a function Fibonacci().

#include <stdio.h>
void Fibonacci(int);

main(){
	printf("Fibonacci Series upto 25th term is:\n");
	Fibonacci(25);
}

void Fibonacci(int upto){
	int i, a = 0, b = 1, c;
	for(i=0; i<upto; i++){
		c = a+b;
		a = b;
		b = c;
		printf("%d, ", a);
	}
}


