#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2, *fp3;
	int num;

	fp1 = fopen("integers.txt", "r");
	fp2 = fopen("odd.txt", "w");
	fp3 = fopen("even.txt", "w");

	if (fp1 == NULL || fp2 == NULL || fp3 == NULL){
		printf("Error opening files!");
		exit(1);
	}

	while (fscanf(fp1, "%d", &num) == 1){
		if (num % 2 == 0) fprintf(fp3, "%d\n", num);
		else fprintf(fp2, "%d\n", num);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	printf("Integers from file 'integers.txt':\n");
	fp1 = fopen("integers.txt", "r");
	while (fscanf(fp1, "%d", &num) == 1) printf("%d\n", num);
	fclose(fp1);

	printf("\nOdd integers from file 'odd.txt':\n");
	fp2 = fopen("odd.txt", "r");
	while (fscanf(fp2, "%d", &num) == 1) printf("%d\n", num);
	fclose(fp2);

	printf("\nEven integers from file 'even.txt':\n");
	fp3 = fopen("even.txt", "r");
	while (fscanf(fp3, "%d", &num) == 1) printf("%d\n", num);
	fclose(fp3);

	return 0;
}

