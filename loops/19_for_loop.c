/*#include<stdio.h>
    int main()
{
    int a;
    printf("enter the no\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        printf("%d\n",i+1);
    }
    return 0;
}*/
#include<stdio.h>
    int main()
{
    int a,i;
    printf("enter the no \n");
    scanf("%d",&a);
    //for(intialize;condition;update){
    for(i=a;i;i--){
        printf("%d\n",i);
    }
    return 0;
}
