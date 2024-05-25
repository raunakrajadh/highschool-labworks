#include<stdio.h>
int main(){
	int n, i;
	float sum = 0, avg, max, min;
	int *ptr;
	
	printf("Enter the number of elements: "); scanf("%d", &n);
	ptr = (int*) malloc(n * sizeof(int));
	
	printf("Enter the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	
	avg = sum / n;
	max = *ptr;
	min = *ptr;
	
	for(i = 0; i < n; i++){
		if(*(ptr + i) > max) max = *(ptr + i);
		if(*(ptr + i) < min) min = *(ptr + i);
	}
	printf("Sum = %.2f\nAverage = %.2f\nMaximum = %.2f\nMinimum = %.2f\n", sum, avg, max, min);
	free(ptr);
}

