#include<stdio.h>
    int main()
{
    char a;
    printf("enter any character\n");
    scanf("%c",&a);
    if (a<=122&&a>=97){
        printf("%c is lowercase",a);
    }
    else{
        printf("%c is uppercase",a);
    }
    return 0;
}