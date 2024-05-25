#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int roll_no;
	char name[20], address[50], telephone_no[15];
	char choice;

	fp = fopen("student.txt", "a");
	if (fp == NULL){
		printf("Error opening file\n");
		exit(1);
	}

	do{
		printf("Enter roll number: "); scanf("%d", &roll_no);
		printf("Enter name: "); scanf("%s", name);
		printf("Enter address: "); scanf("%s", address);
		printf("Enter telephone number: "); scanf("%s", telephone_no);

		fprintf(fp, "%d %s %s %s\n", roll_no, name, address, telephone_no);

		printf("Do you want to add more records (y/n): ");
		scanf(" %c", &choice);
	} while (choice == 'y');

	fclose(fp);

	return 0;
}

