#include<stdio.h>

struct employee{
	int id;
	char name[20];
	char post[20];
	float basic_salary;
	float allowance;
	float gross_salary;
};

int main(){
	
	struct employee emp[15];
	float avg_salary;
	int i;
	float total_gross_salary = 0;

	// Read employee details
	for(i=0; i<15; i++){	
		printf("\nEnter employee id (%d): ", i+1);
		scanf("%d", &emp[i].id);
		printf("Enter employee name (%d): ", i+1);
		scanf("%s", emp[i].name);
		printf("Enter employee post (%d): ", i+1);
		scanf("%s", emp[i].post);
		printf("Enter employee basic salary (%d): ", i+1);
		scanf("%f", &emp[i].basic_salary);
	}

	// Calculate allowance and gross salary
	for(i=0; i<15; i++){
		emp[i].allowance = emp[i].basic_salary * 0.15;
		emp[i].gross_salary = emp[i].basic_salary + emp[i].allowance;
		total_gross_salary += emp[i].gross_salary;
	}

	// Calculate average gross salary
	avg_salary = total_gross_salary / 15;

	// Display employee details
	printf("\nEmployee Details:\n");
	printf("ID\tName\tPost\tBasic Salary\tAllowance\tGross Salary\n");
	for(i=0; i<15; i++){
		printf("%d\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\n", 
			emp[i].id, 
			emp[i].name, 
			emp[i].post, 
			emp[i].basic_salary, 
			emp[i].allowance, 
			emp[i].gross_salary
		);
	}

	// Display average gross salary
	printf("\nAverage Salary: %.2f\n", avg_salary);

	return 0;
}

