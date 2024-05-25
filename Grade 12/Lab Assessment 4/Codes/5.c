#include<stdio.h>
#include<string.h>
struct employee
{
	int regno; char name[25]; float sub1; float sub2;
	float sub3; float sub4; float sub5; float total;
	float percentage; char result[25];
};
main()
{
	int n, i;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	
	struct employee e[n]; float avg_sal,a[n],p[n];
	for(i=0;i<n;i++){
		printf("Enter the regno,name sub1,sub2,sub3,sub4,sub5 (%d): ",i+1);
		scanf("%d%s%f%f%f%f%f",&e[i].regno,&e[i].name,&e[i].sub1,&e[i].sub2,&e[i].sub3,&e[i].sub4,&e[i].sub5);
	}
	for(i=0;i<n;i++){
		a[i]=e[i].sub1+e[i].sub2+e[i].sub3+e[i].sub4+e[i].sub5;
		p[i]=(a[i]/500)*100;
		
		if(e[i].sub1>=75 && e[i].sub2>=75 && e[i].sub3>=75 && e[i].sub4>=75 && e[i].sub5>=75){
			strcpy(e[i].result,"distinction");	
		}
		else if(e[i].sub1>=60 && e[i].sub2>=60 && e[i].sub3>=60 && e[i].sub4>=60 && e[i].sub5>=60){
			strcpy(e[i].result,"first div");	
		}
		else if(e[i].sub1>=45 && e[i].sub2>=45 && e[i].sub3>=45 && e[i].sub4>=45 && e[i].sub5>=45){
			strcpy(e[i].result,"second div");	
		}
		else if(e[i].sub1>=35 && e[i].sub2>=35 && e[i].sub3>=35 && e[i].sub4>=35 && e[i].sub5>=35){
			strcpy(e[i].result,"pass");	
		}
		else{
			strcpy(e[i].result,"fail");	
		}
	}
	printf("Regno \t Name \t sub1 \t sub2 \t sub3 \t sub4 \t sub5 \t Total \t Percentage \t Result \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t %s \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %s",
			e[i].regno,e[i].name,e[i].sub1,e[i].sub2,e[i].sub3,e[i].sub4,e[i].sub5,a[i],p[i],e[i].result
		);
		printf("\n");
	}
}
