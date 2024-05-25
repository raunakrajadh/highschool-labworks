// 1. To find the average age of any three students based on theri age supplied by a user through avg_age().

#include <stdio.h>
float avg_age(int, int, int);

main(){
	int a,b,c;
	printf("Enter age of three different students: [a, b, c]: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("The average age of the students is %.3f.", avg_age(a,b,c));
}

float avg_age(int x, int y, int z){
	return((x+y+z)/3.0);
}


