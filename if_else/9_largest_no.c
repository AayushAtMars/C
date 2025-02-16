#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first no\n");    //we can also use as scanf(%d%d%d,&a,&b,&c)
    scanf("%d",&a);
    printf("enter second no\n");
    scanf("%d",&b);
    printf("enter third no\n");
    scanf("%d",&c);
    if(a>b&&a>c){                       //we can use if under if
        printf("%d is greater",a);        //if(a>b){
    }                                         //if (a>c){
    else if(b>a&&b>c){
        printf("%d is greater",b);
    } 
    else if(c>a&&c>b){
        printf("%d is greater",c);
    } 
    else{
        printf("same no");
    }
    return 0;
}