#include<stdio.h>
    int main()
{
    int a,b,c;
    FILE*ptr;
    ptr=fopen("1_file.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("The value of a,b,c%d %d %d",a,b,c);
    return 0;
}