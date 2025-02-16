#include<stdio.h>
void enc(char str[]){
    while(*str!='\0'){
        *str=*str+1;
        str++;
    }
}
    int main()
{
    char str[]="aayush";
    enc(str);
    printf("%s",str);
    return 0;
}