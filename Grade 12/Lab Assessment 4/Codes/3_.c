#include<stdio.h>
struct employee
{
	int emp_id;
	char name[25];
	char post[25];
	float bsal;
	float allowance;
	float gross;
};
main()
{
	int n;
	printf("Enter the number of Employee: ");
	scanf("%d",&n);
	struct employee e[n];
	float avg_gross,a=0;
	int i;
	for(i=0;i<n;i++)
	{
	printf("Enter the Emp_id, Name, Post, Bsal of Employee (%d): ",i+1);
	scanf("%d%s%s%f",&e[i].emp_id,&e[i].name,&e[i].post,&e[i].bsal);
	}
	for(i=0;i<n;i++)
	{
	e[i].allowance=e[i].bsal*0.15;
	e[i].gross=e[i].allowance+e[i].bsal;
	}
	for(i=0;i<n;i++)
	{
		a=e[i].bsal+a;
	}
	avg_gross=a/n;
	printf("Emp_id \tName \t\tPost \t\tBsal \tAllowence \tGross\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t %s \t %s \t %.2f \t %.2f \t %.2f",
			e[i].emp_id,e[i].name,e[i].post,e[i].bsal,e[i].allowance,e[i].gross
		);
		printf("\n");
	}
	printf("\n Average Gross=%.2f",avg_gross);
}

