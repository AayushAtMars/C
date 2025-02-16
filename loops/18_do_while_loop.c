#include<stdio.h>
int main()
{
    int a;
    int i=0;
    printf("enter the no\n");
    scanf("%d",&a);
    do{
        printf("%d\n",i+1);
        i++;
    }
        while(i<a);
    return 0;

}