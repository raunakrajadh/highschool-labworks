// 9. To find out the maximum value among the following integers by using a user-defined function named min().

#include <stdio.h>

int array[15] = {100,10,30,-20,-40,50,200,40,80,90,200,500,120,-50,80};
int min(int[]);

main(){
	printf("The minimum value is %d. ", min(array));
}

int min(int array[]){
	int i, s = array[0];
	for(i=0; i<15; i++){
		if(s>array[i]){
			s=array[i];
		}
	}
	return(s);
}


