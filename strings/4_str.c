#include<stdio.h>
void copy(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
}
    int main()
{
    char str1[]="aayush";
    char str2[30];
    copy(str1,str2);
    printf("%s",str2); 
    return 0;
}