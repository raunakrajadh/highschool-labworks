// 7. To find out the greatest value among three different integer values input by a user through greatest().

#include <stdio.h>
int greatest(int, int, int);

main(){
	int a,b,c;
	printf("Enter three different integers [a,b,c]: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d is the greatest number.", greatest(a, b, c));
}

int greatest(int a, int b, int c){
	if(a>b && a>c) return(a);
	else if(b>a && b>c) return(b);
	else return(c);
}


