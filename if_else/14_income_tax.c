#include<stdio.h>
    int main()
{
    float salary;
    printf("enter salary\n");
    scanf("%f",&salary); 
    if(salary>=250000 && salary<=500000){
        printf("inome tax is%f\n",(salary-250000)*0.05);
    }
    else if(salary>500000 && salary<=1000000){
        printf("inome tax is%f\n",salary*0.2);
    }
    else if(salary>1000000){
        printf("inome tax is%f\n",salary*0.3);
    }
    else if(salary<250000){
        printf("no tax for salary below 2.5 lakh");
    }
    return 0;
}