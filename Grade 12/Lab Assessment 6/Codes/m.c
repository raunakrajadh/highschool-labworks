#include<stdio.h>
#include<stdlib.h>

struct student{
	int reg_no;
	char name[20];
	int marks[5];
};

int main(){
	FILE *fp;
	struct student s;
	int i;
	char ch;

	fp = fopen("studinfo.dat", "ab");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}
	
	do{
		printf("Enter registration number: "); scanf("%d", &s.reg_no);
		printf("Enter name: "); scanf("%s", s.name);
		printf("Enter marks in 5 subjects: ");
		for(i=0; i<5; i++) scanf("%d", &s.marks[i]);

		fwrite(&s, sizeof(s), 1, fp);

		printf("Do you want to add more records (y/n): ");
		scanf("%c", &ch);
	} while (ch == 'y');

	fclose(fp);
	return 0;
}

