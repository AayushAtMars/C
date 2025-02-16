#include<stdio.h>
#include<string.h>
    int main()
{
    char s[] = "mahan aayush";
    char s1[30]="hehe";
    //int a=strlen(s);
    //strcpy(s1,s);
    //puts(s1);
    //strcat(s,s1);
    int a=strcmp(s,s1);
    printf("%d",a);
    return 0;
}