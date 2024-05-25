#include<stdio.h>
#include<stdlib.h>

struct student{
	int regno;
	char name[20];
	int marks[5];
	int total;
	float percentage;
};

int main(){
	FILE *fp;
	struct student s;
	int i;
	
	fp = fopen("studinfo.dat", "rb");
	if(fp == NULL){
		printf("Error in opening file\n");
		exit(1);
	}
	
	printf("\nRegno\tName\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\tPercentage\n");
	while(fread(&s, sizeof(s), 1, fp) == 1){
		s.total = 0;
		printf("%d\t%s\t", s.regno, s.name);
		for(i=0; i<5; i++){
			printf("%d\t", s.marks[i]);
			s.total += s.marks[i];
		}
		s.percentage = (float)s.total/5;
		printf("%d\t%.2f\n", s.total, s.percentage);
	}
	fclose(fp);
	return 0;
}

