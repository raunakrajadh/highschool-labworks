#include <stdio.h>
#include <string.h>

int basic_salary(char[25]);
struct employee{
	int id;
	char name[25];
	char post[25];
	float basic_salary, allowance, gross_salary;
};

int main(){
	int n, i;
	printf("How many employees? : ");
	scanf("%d", &n);
	struct employee e[n];
	
	for(i=0; i<n; i++){
		printf("\n");
		printf("(%d) Provide employee id: ", i+1);
		scanf("%d", &e[i].id);
		printf("(%d) Name your employee: ", i+1);
		scanf("%s", &e[i].name);
		printf("(%d) Assign them a post: ", i+1);
		scanf("%s", &e[i].post);
		
		e[i].basic_salary = basic_salary(e[i].post);
		
		printf("%.2f bsal", e[i].basic_salary);
	}
}

int basic_salary(char post[25]){
	if(post == "director") return 8;
	else if(post == "manager") return 70000;
	else if(post == "sr.officer") return 50000;
	else if(post == "officer") return 45000;
	else if(post == "assistant") return 30000;
	else return 0;
}
