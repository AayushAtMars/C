// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
//     int main()
//     {
//     struct employee e1;
//     e1.code=100;
//     e1.salary=69.9;
//     strcpy(e1.name,"harry");

//     printf("%d\n",e1.code);
//     printf("%f\n",e1.salary);
//     printf("%s\n",e1.name);

//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     struct employee e1,e2,e3;
//     printf("enter the code of employee 1 : ");
//     scanf("%d",&e1.code);
//     printf("enter the salary of employee 1 : ");
//     scanf("%f",&e1.salary);
//     printf("enter the name of employee 1 : ");
//     scanf("%s",e1.name);

//     printf("enter the code of employee 2 : ");
//     scanf("%d",&e2.code);
//     printf("enter the salary of employee 2 : ");
//     scanf("%f",&e2.salary);
//     printf("enter the name of employee 2 : ");
//     scanf("%s",e2.name);

//     printf("enter the code of employee 3 : ");
//     scanf("%d",&e3.code);
//     printf("enter the salary of employee 3 : ");
//     scanf("%f",&e3.salary);
//     printf("enter the name of employee 3 : ");
//     scanf("%s",e3.name);

//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     struct employee facebook[100];
//     facebook[0].code=100;
//     facebook[0].salary=99;
//     strcpy(facebook[0].name,"aayush");

//     facebook[1].code=101;
//     facebook[1].salary=98;
//     strcpy(facebook[1].name,"aayu");

//     facebook[2].code=102;
//     facebook[2].salary=97;
//     strcpy(facebook[2].name,"ush");

//     printf("done");
// }




// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// int main(){
//     struct employee harry={100,69,"aayush"};

//     printf("the code is: %d\n",harry.code);
//     printf("the salary is: %f\n",harry.salary);
//     printf("the name is: %s\n",harry.name);
// }



// 


#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp){
    printf("the code is: %d\n",emp.code);
    printf("the salary is: %f\n",emp.salary);
    printf("the name is: %s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=101;
    //(*ptr).code=101; or u can also write as ptr->code = 101;
    ptr->code=101;    
    ptr->salary=1000;    
    strcpy(ptr->name,"harry");    
    show(e1);
}