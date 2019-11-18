#include<stdio.h>
#include<string.h>
struct employee
{
        int code;
        char name[20];
        char department[20];
        float salary;
};
void main()
{
        struct employee e;
        printf("enter employee code\n");
        scanf("%d",&e.code);
        printf("enter employee name\n");
        scanf("%s",&e.name);
        printf("enter employee department\n");
        scanf("%s",&e.department);
        printf("enter employee salary\n");
        scanf("%f",&e.salary);
        printf("information about employee is \n");
        printf("Employee code: %d \n",e.code);
        printf("Employee name: %s \n",e.name);
        printf("Employee department: %s \n",e.department);
        printf("Employee salary: %f \n",e.salary);
}
