// 8. To find out the maximum value among 10 different integers given by a user throught max();

#include <stdio.h>

int num_array[10];
int max(int[]);

main(){
	int i;
	for(i=0; i<10; i++){
		printf("Enter number at place %d: ", i+1);
		scanf("%d", &num_array[i]);
	}
	printf("\nThe maximum value is %d", max(num_array));
}

int max(int array[]){
	int i, g = array[0];
	for(i=0; i<10; i++){
		if(g<array[i]){
			g=array[i];
		}
	}
	return(g);
}


