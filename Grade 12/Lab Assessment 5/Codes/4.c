#include<stdio.h>
int main(){
	float p,r,t,si,amt;
	float *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
	ptr1=&p; ptr2=&r; ptr3=&t; ptr4=&si; ptr5=&amt;
	
	printf("Enter the principle amount: "); scanf("%f",ptr1);
	printf("Enter the rate of interest: "); scanf("%f",ptr2);
	printf("Enter the time period in years: "); scanf("%f",ptr3);
	*ptr4=(*ptr1)*(*ptr2)*(*ptr3)/100;
	*ptr5=(*ptr1)+(*ptr4);
	printf("The simple interest is: %f\n",*ptr4);
	printf("The amount is: %f\n",*ptr5);
}

