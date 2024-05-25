#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int num[10], sum = 0, i;

	// open file in write mode
	fp = fopen("num.txt", "w");
	if (fp == NULL){
		printf("Could not open file");
		return 0;
	}

	// read 10 numbers from user
	printf("Enter 10 numbers: \n");
	for (i=0; i<10; i++){
		scanf("%d", &num[i]);
		fprintf(fp, "%d\n", num[i]);
	}

	// close the file
	fclose(fp);

	// open file in read mode
	fp = fopen("num.txt", "r");
	if (fp == NULL){
		printf("Could not open file");
		return 0;
	}

	// read numbers from file
	printf("Reading numbers from file: \n");
	for (i=0; i<10; i++){
		fscanf(fp, "%d", &num[i]);
		printf("%d\n", num[i]);
		sum += num[i];
	}

	// close the file
	fclose(fp);

	// print the sum
	printf("Sum = %d", sum);

	return 0;
}

