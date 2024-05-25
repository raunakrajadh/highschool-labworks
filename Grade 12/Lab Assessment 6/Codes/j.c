#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *source, *target;
	char ch;
	char source_file[100];

	printf("Enter source file name: ");
	scanf("%s", source_file);

	source = fopen(source_file, "r");

	if (source == NULL){
		printf("Source file does not exist.\n");
		exit(1);
	}
	
	target = fopen("textcopy.txt", "w");

	while ((ch = fgetc(source)) != EOF)
	fputc(ch, target);

	printf("File copied successfully.\n");

	fclose(source);
	fclose(target);

	return 0;
}

