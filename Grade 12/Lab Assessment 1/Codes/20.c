// 20. A teacher wants to distribute toffees equally either among the students of Group A or Group B. What will be the lowest number of
// toffees she needs to purchase for this? Develop a program with suitable function to find total number of toffees, if the number of
// students from both the groups are given.

#include <stdio.h>
int toffee_calc(int, int);
int lcm(int, int);

int main()
{
	int groupA, groupB;
	
	printf("Enter the number of students in Group A, B: ");
	scanf("%d%d", &groupA, &groupB);
	
	int total = toffee_calc(groupA, groupB);
	printf("The total number of toffees needed is: %d\n", total);
}

int toffee_calc(int groupA, int groupB){
	return lcm(groupA, groupB);
}

int lcm(int a, int b){
	static int multiple = 0;
	multiple += a;
	if((multiple % a == 0) && (multiple % b == 0)) return multiple;
	else return lcm(a, b);
}


