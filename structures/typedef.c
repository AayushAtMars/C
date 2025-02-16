#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp1;
void show(struct employee emp){
    printf("the code is: %d\n",emp.code);
    printf("the salary is: %f\n",emp.salary);
    printf("the name is: %s\n",emp.name);
}
int main(){
    emp1 e1;
    emp1 *ptr;
    ptr=&e1;
    ptr->code=101;    
    ptr->salary=1000;    
    strcpy(ptr->name,"harry");    
    show(e1);
}