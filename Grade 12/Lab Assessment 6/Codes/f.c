#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	char str[100];

	printf("Enter a line of text: ");
	gets(str);

	fp = fopen("info.txt", "w");
	fprintf(fp, "%s", str);
	fclose(fp);

	printf("Data saved to file successfully!");

	return 0;
}

