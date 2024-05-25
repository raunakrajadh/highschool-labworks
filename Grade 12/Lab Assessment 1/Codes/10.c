// 10. To sort any n different integer values in ascending order through sort()

#include <stdio.h>
void sort(int[], int);

main(){
	int i, j, size;
	printf("How many numbers do you want to enter? : ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("\n\n");
	for(i=0; i<size; i++){
		printf("Enter an integer for place %d: ", i+1);
		scanf("%d", &array[i]);	
	}
	
	sort(array, size);
	
	printf("\n\nSorted Array is:\n");
	for(j=0; j<size; j++){
		printf("%d, ", array[j]);
	}
	
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


