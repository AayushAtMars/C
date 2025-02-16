#include<stdio.h>
    int main()
{
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("grade is A\n");
    }
   else if(marks<=100 && marks>=90){
        printf("grade is B\n");
    }
   else if(marks<=90 && marks>=80){
        printf("grade is C\n");
    }
   else if(marks<=80 && marks>=70){
        printf("grade is D\n");
    }
   else if(marks<=70 && marks>=0){
        printf("grade is F\n");
    }
    return 0;
}