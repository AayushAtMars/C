#include<stdio.h>
void slice(char *str,int m,int n){
    int i=0;
    while(i<n){
        str[i]=str[m+i];
        i++;
    }
    str[i]='\0';
}
    int main()
{
    char *str="aayush";
    int m=1;
    int n=4;
    slice(str,m,n);
    printf("%s",str);
    return 0;
}