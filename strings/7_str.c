#include<stdio.h>
int search(char str[],char s){
    int i=0;
    int count=0;
    while(str[i]!=0){
        if(str[i]==s){
            count++;
        }
        i++;
    }
    if(count>=1){
            printf("found");
        }
    else
    printf("not found");
}
    int main()
{
    char str[100];
    char ch;
    printf("Enter the string :\n");
    gets(str);
    printf("which character u want to search : ");
    scanf(" %c",&ch);
    search(str,ch);
    return 0;
}