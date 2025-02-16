#include<stdio.h>
int count(char str[],char s){
    int i=0;
    int n=0;
    while(str[i]!=0){
        if(str[i]==s){
            n++;
        }
        //printf("%c",str[i]);
        i++;
    }
    printf("%d",n);
}
    int main()
{
    char str[100];
    char ch;
    printf("Enter the string :\n");
    gets(str);
    printf("which character u want to count : ");
    scanf(" %c",&ch);
    count(str,ch);
    return 0;
}