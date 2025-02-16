#include<stdio.h>
    int main()
{
    int n,z;
    FILE *ptr;
    ptr=fopen("table.txt","a");
    printf("which table u want: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        z=n*i;
        fprintf(ptr,"%d X %d = %d\n",n,i,z);
    }
    fprintf(ptr,"\n\n");
    printf("done");
    return 0;
}