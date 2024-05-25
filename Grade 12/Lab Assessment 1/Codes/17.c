// 17. To test whether a word input by a user is a PALINDROME or not through a user-defined function ispalin().

#include <stdio.h>
#include <string.h>
int isplain(char[]);

main(){
	char string[100];
	printf("Enter a word of not more than length 100: ");
	scanf("%s", &string);
	
	if(ispalin(string)){
		printf("\nThe word a palindrome.");
	}
	else{
		printf("\nThe word is not a palindrome.");
	}
}

int ispalin(char str[]){
	int i, j;
	int len = strlen(str);
	for(i = 0; i<len; i++){
		if(str[i] != str[len-(i+1)]) return 0;
	}
	return 1;
}


