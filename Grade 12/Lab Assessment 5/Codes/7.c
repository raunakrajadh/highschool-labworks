#include <stdio.h>
int main(){
	int arr[10], sum = 0;
	float avg;
	int *ptr;
	ptr = arr;
	
	printf("Enter 10 integer values: ");
	for (int i = 0; i < 10; i++){
		scanf("%d", ptr);
		sum += *ptr;
		ptr++;
	}
	avg = (float)sum / 10;
	printf("Sum of 10 numbers is %d\n", sum);
	printf("Average of 10 numbers is %.2f\n", avg);
}

