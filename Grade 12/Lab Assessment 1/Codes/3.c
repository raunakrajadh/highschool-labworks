// 3. To calculate area of triangle on the basis of its sides through the function areatriangle().

#include <stdio.h>
#include <math.h>

float areatriangle(int, int, int);

main(){
	int a, b, c;
	printf("Enter three sides of a triangle [a, b, c]: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("The area of the triangle is %.3f", areatriangle(a,b,c));
}

float areatriangle(int a, int b, int c){
	float s = (a+b+c)/2.0;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	return(area); 
}


