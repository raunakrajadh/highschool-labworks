#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    int emp_code;
    char emp_name[50];
    char post[50];
    int salary;
};

void add_record(FILE *f)
{
    printf("\t=> Add Record:\n\n");
    struct employee e;
    printf("Enter employee code: ");
    scanf("%d", &e.emp_code);
    printf("Enter employee name: ");
    scanf("%s", e.emp_name);
    printf("Enter post: ");
    scanf("%s", e.post);
    printf("Enter salary: ");
    scanf("%d", &e.salary);

    fwrite(&e, sizeof(e), 1, f);
    fclose(f);
}

void display_record(FILE *f)
{
    printf("\t=> Display Record:\n\n");
    struct employee e;
    printf("Code\t Name\t Post\t Salary\n");
    printf("-------------------------------\n");
    while (fread(&e, sizeof(e), 1, f) == 1)
    {
        printf("%d\t%s\t%s\t%d\n", e.emp_code, e.emp_name, e.post, e.salary);
    }
    fclose(f);
}

void search_record(FILE *f)
{
    printf("\t=> Search Record:\n\n");
    int emp_code;
    struct employee e;

    printf("Enter employee code to search: ");
    scanf("%d", &emp_code);

    while (fread(&e, sizeof(e), 1, f) == 1)
    {
        if (e.emp_code == emp_code)
        {
        	printf("\nCode\t Name\t Post\t Salary\n");
    		printf("-------------------------------\n");
            printf("%d\t%s\t%s\t%d\n", e.emp_code, e.emp_name, e.post, e.salary);
            fclose(f);
            return;
        }
    }
    printf("No employee with this employee code found.\n");
    fclose(f);
}

void delete_record(FILE *f)
{
    printf("\t=> Delete Record:\n\n");
    int emp_code;
    struct employee e;
    FILE *ft;
    int flag=0;

    printf("Enter employee code to delete: ");
    scanf("%d", &emp_code);

    ft = fopen("temp.dat", "wb");
    while (fread(&e, sizeof(e), 1, f) == 1)
    {
    	if (e.emp_code == emp_code){
    		flag=1;
		}
        if (e.emp_code != emp_code){
        	fwrite(&e, sizeof(e), 1, ft);
		} 
	}
	fclose(ft);
	fclose(f);
	
    remove("employee.dat");
    rename("temp.dat", "employee.dat");
    
    if(flag==0){
    	printf("No employee with this employee code found.\n");
    	return;
	}
    printf("\nRecord Deleted..\n");                         
}    

void update_record(FILE *f)
{
    printf("\t=> Update Record:\n\n");
    int emp_code;
    struct employee e;
    FILE *ft;
    int flag=0;
    
    printf("Code\t Name\t Post\t Salary\n");
    printf("-------------------------------\n");
    while (fread(&e, sizeof(e), 1, f) == 1)
    {
        printf("%d\t%s\t%s\t%d\n", e.emp_code, e.emp_name, e.post, e.salary);
    }
    fclose(f);

    printf("\nEnter employee code to update: ");
    scanf("%d", &emp_code);

	fopen("employee.dat", "ab+");
    ft = fopen("temp.dat", "wb");
    while (fread(&e, sizeof(e), 1, f) == 1)
    {
        if (e.emp_code == emp_code)
        {
            printf("Employee Name: %s\n", e.emp_name);
            printf("Enter new name: ");
            scanf("%s", e.emp_name);

            printf("Post: %s\n", e.post);
            printf("Enter new post: ");
            scanf("%s", e.post);

            printf("Salary: %d\n", e.salary);
            printf("Enter new salary: ");
            scanf("%d", &e.salary);
            flag=1;
        }
        fwrite(&e, sizeof(e), 1, ft);
    }
    fclose(ft);
    fclose(f);
    
    remove("employee.dat");
    rename("temp.dat", "employee.dat");
    
    if(flag==0){
    	printf("No employee with this employee code found.\n");
    	return;
	}
    printf("\nData Updated");
}

int main()
{
    FILE *f;
    int choice;

    while(1)
    {
    	
    	f = fopen("employee.dat", "ab+");
		if(f==NULL){
			return 1;
		}
		
    	printf("\n----------------------\n");
    	printf("\t=> Menu:\n\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Update Employee\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n----------------------\n");        
        printf("\n");

        switch (choice)
        {
        case 1:
            add_record(f);
            break;
        case 2:
            display_record(f);
            break;
        case 3:
            search_record(f);
            break;
        case 4:
            delete_record(f);
            break;
        case 5:
            update_record(f);
            break;
        case 6:
            fclose(f);
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}

