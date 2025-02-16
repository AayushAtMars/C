#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
    int main()
{
    struct employee emp;
    struct employee *ptr;
    ptr=&emp;
    ptr->code=100;
    ptr->salary=50000;
    strcpy(ptr->name,"harry");

    printf("%d\n",emp.code);
    printf("%f\n",emp.salary);
    printf("%s",emp.name);
    return 0;
}