// 18. To sort name of any 12 different students in alphabetic order through user-defined function named namesort().

#include<stdio.h>
#include<string.h>

void namesort(char[12][20], int);

main(){
	int i, n = 12;
	char name[n][20];
	
	for (i = 0; i < n; i++){
		printf("Enter the name of the student at place %d of 12: ", i+1);
		scanf("%s", name[i]);
	}
	
	namesort(name, n);
	
	printf("\nThe names of the students in alphabetical order are: \n");
	for (i = 0; i < n; i++){
		printf("%s\n", name[i]);
	}
}

void namesort(char name[][20], int n){
	char temp[20];
	int i, j;
	for (i = 0; i < n - 1 ; i++){
		for (j = i + 1; j < n; j++){
			if (strcmp(name[i], name[j]) > 0){
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
}


