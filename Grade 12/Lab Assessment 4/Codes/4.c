#include<stdio.h>
struct employee
{
	int regno;
	char name[25];
	float sub1;
	float sub2;
	float sub3;
	float sub4;
	float sub5;
	float sub6;
	float total;
	float percentage;
};
main()
{
	struct employee e[10];
 	float avg_sal,a[10],p[10];
 	int i;
	
	for(i=0;i<10;i++){
		printf("Enter the Regno,Name sub1,sub2,sub3,sub4,sub5,sub6: ",i+1);
		scanf("%d%s%f%f%f%f%f%f",
			&e[i].regno,
			&e[i].name,
			&e[i].sub1,
			&e[i].sub2,
			&e[i].sub3,
			&e[i].sub4,
			&e[i].sub5,
			&e[i].sub6
		);
	}
	for(i=0;i<10;i++){
		a[i]=e[i].sub1+e[i].sub2+e[i].sub3+e[i].sub4+e[i].sub5+e[i].sub6;
		p[i]=(a[i]/600)*100;
	}
	printf("Regno \t Name \t sub1 \t sub2 \t sub3 \t sub4 \t sub5 \t sub6 \t Total \t Percentage \n");
	for(i=0;i<10;i++){
		printf("%d \t %s \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f",
			e[i].regno,
			e[i].name,
			e[i].sub1,
			e[i].sub2,
			e[i].sub3,
			e[i].sub4,
			e[i].sub5,
			e[i].sub6,
			a[i],p[i]
		);
		printf("\n");
	}
}


