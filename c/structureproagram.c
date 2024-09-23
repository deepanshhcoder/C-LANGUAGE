#include<stdio.h>
struct employee
{
    int empno;
    char name[20];
    int salary;
};
void main()
{
    struct employee e[2];
    
int i;
printf("enter information of employee-\n");
for(i=0;i<2;i++)
{
    e[i].empno=i+1;
printf("enter name:");
scanf("%s",e[i].name);
printf("enter salary:");
scanf("%d",&e[i].salary);
printf("\n");
}
printf("display information:\n");
for(i=0;i<2;i++)
{
    e[i].empno=i+1;
printf("\ninformation for employee no.%d:\t",i+1);
printf("name:%s\t",e[i].name);
printf("salary:%d\t",e[i].salary);
}
}