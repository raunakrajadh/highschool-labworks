#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	FILE *fp;
	char ch;

	fp = fopen("info.txt", "r");
	if (fp == NULL){
		printf("Error opening file\n");
		exit(1);
	}
	while ((ch = fgetc(fp)) != EOF){
		printf("%c", toupper(ch));
	}
	fclose(fp);

	return 0;
}

