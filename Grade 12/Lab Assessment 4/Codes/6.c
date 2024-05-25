#include<stdio.h>
#include<string.h>
struct students{
    int regno; char name[25]; char gender[10];
    int grade; char address[26];
};
main()
{
    struct students e[15]; int i,j;
    char temp[25],temp2[25],temp4[25]; int temp3,temp1;
    
    for(i=0;i<15;i++){
        printf("Enter regno, name, gender, grade and address of student (%d): ",i+1);
        scanf("%d%s%s%d%s",&e[i].regno,&e[i].name,&e[i].gender,&e[i].grade,&e[i].address);
    }
    for(i=0;i<15;i++){
        strlwr(e[i].name);
    }
    for(i=0;i<15;i++){
        for(j=i+1;j<15;j++){
            if(strcmp(e[i].name,e[j].name)>0){
                strcpy(temp,e[i].name);
				temp1=e[i].regno;
				strcpy(temp2,e[i].gender);
				temp3=e[i].grade;
				strcpy(temp4,e[i].address);
				
                strcpy(e[i].name,e[j].name);
				e[i].regno=e[j].regno;
				strcpy(e[i].gender,e[j].gender);
				e[i].grade=e[j].grade;
				strcpy(e[i].address,e[j].address);
				
                strcpy(e[j].name,temp);
				e[j].regno=temp1;
				strcpy(e[j].gender,temp2);
				e[j].grade=temp3;
				strcpy(e[j].address,temp4);
            }
        }
    }
    printf("\n\tRegno\tName\tGender\tGrade\tAddress");
    for(i=0;i<15;i++)
    {
        printf("\n\t%d\t%s\t%s\t%d\t%s",e[i].regno,e[i].name,e[i].gender,e[i].grade,e[i].address);
    }
}

