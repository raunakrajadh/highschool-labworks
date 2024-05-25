// 19. To count total number of vowel letter existing in a sentence input by a user through vowelcount().

#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Enter a sentence: ");
	gets(str);
	printf("Total number of vowels in the sentence is: %d", vowelcount(str));
}

int vowelcount(char str[]){
	int i, count = 0;
	for (i = 0; i<strlen(str); i++){
		if (
			str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
			str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
		){
			count++;	
		}
	}
	return(count);
}


