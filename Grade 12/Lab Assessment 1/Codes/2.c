// 2. To calculate volume, circumference and are of a sphere based on its radius value supplied by a user by using user-defined function named
//	  vol(), circumference() and area().

#include <stdio.h>

float vol(int);
float circumference(int);
float area(int);

main(){
	int radius;
	printf("Enter the radius of a sphere: ");
	scanf("%d", &radius);
	printf("Sphere's' volume is %.3f, circumference is %.3f and the area is %.3f.", vol(radius), circumference(radius), area(radius));
}

float vol(int r){
	return((4.0/3.0)*(22.0/7.0)*r*r*r); // 4/3*pie*r^3
}
float circumference(int r){
	return(2.0*(22.0/7.0)*r); // 2*pie*r
}
float area(int r){
	return(4.0*(22.0/7.0)*r*r); // 4*pie*r^2
}


