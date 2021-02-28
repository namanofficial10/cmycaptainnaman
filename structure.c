#include <stdio.h>
 

struct employee{
    char    name[20][30];
    int     empId[20];
    float   salary[20];
};
 
int main()
{
    int i,j;
    struct employee emp;
     
    for(i=0,i<20.i++){
    printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name[i]);
    printf("ID:");            scanf("%d",&emp.empId[i]);
    printf("Salary ?:");        scanf("%f",&emp.salary[i]);
    } 
    
    printf("Name\t");
    printf("Id\t");
    printf("Salary\n",);
    for(j=0,j<20.j++){
    printf("%s\t",emp.name[j]);
    printf("%d\t",emp.empId[j]);
    printf("%f\n",emp.salary[j]);
    }
    return 0;
}
