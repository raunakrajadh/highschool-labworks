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
	
	struct employee emp[3];
	float avg_gross_salary;
	int i;
	float total_gross_salary = 0;

	// Read employee details
	for(i=0; i<3; i++){	
		printf("\nEnter employee id: ");
		scanf("%d", &emp[i].id);
		printf("Enter employee name: ");
		scanf("%s", emp[i].name);
		printf("Enter employee post: ");
		scanf("%s", emp[i].post);
		printf("Enter employee basic salary: ");
		scanf("%f", &emp[i].basic_salary);
	}

	// Calculate allowance and gross salary
	for(i=0; i<3; i++){
		emp[i].allowance = emp[i].basic_salary * 0.15;
		emp[i].gross_salary = emp[i].basic_salary + emp[i].allowance;
		total_gross_salary += emp[i].gross_salary;
	}

	// Calculate average gross salary
	avg_gross_salary = total_gross_salary / 3;

	// Display employee details
	printf("\nEmployee Details:\n");
	for(i=0; i<3; i++){
		printf("ID: %d\nName: %s\nPost: %s\nBasic Salary: %.2f\nAllowance: %.2f\nGross Salary: %.2f\n\n",
			emp[i].id, 
			emp[i].name, 
			emp[i].post, 
			emp[i].basic_salary, 
			emp[i].allowance, 
			emp[i].gross_salary
		);
	}
	// Display average gross salary
	printf("\nAverage Gross Salary: %.2f\n", avg_gross_salary);

	return 0;
}


