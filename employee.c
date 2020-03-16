#include<stdio.h>
struct employee
{
    char    name[30];
    int     empId;
    float   height;
};
 
int main()
{
    struct employee emp;     
    printf("Enter details ");
    printf("Name ");  
    scanf("%c",&emp.name);
    printf("ID ");  
    scanf("%d",&emp.empId);
    printf("hegiht ");    
    scanf("%f",&emp.height);
    printf("Entered details are ");
    printf("Name %c",emp.name);
    printf("empId %d",emp.empId);
    printf("height %f",emp.height);
}

