#include<stdio.h>
    int main()
{
    float marks1,marks2,marks3;
    printf("enter marks 1(from 100)\n");
    scanf("%f",&marks1);
    printf("enter marks 1(from 100)\n");
    scanf("%f",&marks2);
    printf("enter marks 1(from 100)\n");
    scanf("%f",&marks3);
    float total=(marks1+marks2+marks3)/3;
    if((total>=40)&&(marks1>=33)&&(marks2>=33)&&(marks3>=33)){
        printf("students is pass");
    }
    else{
        printf("fail\n");
    }
    return 0;
}