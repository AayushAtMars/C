#include<stdio.h>
int len1(char str[]){
    int a=0;
    int i=0;
    while(str[i]!='\0'){
        a++;
        i++;
    }
    return a;
}
    int main()
{
    int a;
    char str[100];
    printf("enter the string :\n");
    gets(str);
    a=len1(str);
    printf("length of the string is : %d",a);
    return 0;
}