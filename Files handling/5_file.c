#include<stdio.h>
    int main()
{
    FILE *ptr;
    ptr=fopen("5_file.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
     ptr=fopen("5_file.txt","w");
    fprintf(ptr,"%d",a*2);
    return 0;
    fclose(ptr);
}