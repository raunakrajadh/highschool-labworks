#include <stdio.h>
// Function to swap two numbers using call by reference
void swapByReference(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// Function to swap two numbers using call by value
void swapByValue(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(){
	int a = 10, b = 20;
	// Before swapping
	printf("Before swapping a = %d and b = %d\n", a, b);
	// Swapping using call by reference
	swapByReference(&a, &b);
	printf("After swapping using call by reference a = %d and b = %d\n", a, b);
	// Swapping using call by value
	swapByValue(a, b);
	printf("After swapping using call by value a = %d and b = %d\n", a, b);
}

