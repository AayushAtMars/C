#include<stdio.h>
    int main()
{
    char name[20];
    int s;
    int i=2;
    FILE *ptr;
    ptr=fopen("4_file.txt","w");
    while(i>0){
        printf("enter the employee name: ");
        scanf("%s",name);
        fprintf(ptr,"%s, ",name);
        printf("enter his salary: ");
        scanf("%d",&s);
        fprintf(ptr,"%d\n",s);
        i--;
    }
    fclose(ptr);
    return 0;
}