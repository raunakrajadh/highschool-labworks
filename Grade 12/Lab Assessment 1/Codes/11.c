// 11. To find out median value among n different numbers supplied by a user through median()

#include <stdio.h>
void sort(int[], int);
float median(int[], int);

main(){
	int i, size;
	printf("How many numbers do you want to enter? : ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("\n\n");
	for(i=0; i<size; i++){
		printf("Enter an integer for place %d: ", i+1);
		scanf("%d", &array[i]);	
	}
	
	printf("The median value is: %.3f", median(array, size));
}

float median(int arr[], int n){
	sort(arr, n);
	if (n % 2 != 0) return(arr[n/2]);
	else return((arr[(n-1)/2] + arr[n/2])/2.0);
}

void sort(int arr[], int n){
	int i, j, temp;
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-i-1; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


