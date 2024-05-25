#include<stdio.h>
struct employee{
	int emp_id;
	char name[25];
	char post[25];
	struct address{
		char city[25];
		char street[25];
		long long int phone;
	} a[10];
};
main(){
	struct employee e[10]; int i;
	
	for(i=0;i<10;i++){
		printf("Enter id, name and post of employee (%d): ",i+1);
		scanf("%d%s%s",&e[i].emp_id,&e[i].name,&e[i].post);
		printf("Enter Address (city, street and phone) of employee (%d): ",i+1);
		scanf("%s%s%lld",&e[i].a[i].city,&e[i].a[i].street,&e[i].a[i].phone);
	}
	
	printf("\nEmp_ID\tEmp_Name\tPost\t\t\tAddress");
	printf("\n\t\t\t\t\tCity\tStreet\tPhone");
	
	for(i=0;i<10;i++){
		printf("\n%d\t%s\t\t%s\t\t%s\t%s\t%lld",
			e[i].emp_id,e[i].name,e[i].post,e[i].a[i].city,e[i].a[i].street,e[i].a[i].phone
		);
	}
}

