#include<stdio.h>
    int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eliguble to vote\n");
    }
    else{
        printf("not eligible to vote");
    }

    return 0;
}