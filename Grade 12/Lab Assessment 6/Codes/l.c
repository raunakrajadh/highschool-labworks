#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int roll;
	char name[20];
	char address[50];
	char tel[15];

	fp = fopen("student.txt", "r");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}

	printf("Student Information:\n");
	printf("--------------------\n");
	while(fscanf(fp, "%d %s %s %s", &roll, name, address, tel) != EOF){
		printf("Roll Number: %d\n", roll);
		printf("Name: %s\n", name);
		printf("Address: %s\n", address);
		printf("Telephone Number: %s\n", tel);
		printf("--------------------\n");
	}

	fclose(fp);
	return 0;
}

