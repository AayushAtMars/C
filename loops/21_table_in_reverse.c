//using whilw loop
/*#include<stdio.h>
    int main()
{
    int a,i=10;
    printf("enter the no of which you want table in reverse order");
    scanf("%d",&a);
    while(i>0){
        printf("%d\n",a*i);
        i--;
    }
    return 0;
}*/


//using for loop
#include<stdio.h>
    int main()
{
    int a,i;
     printf("enter the no of which you want table in reverse order");
    scanf("%d",&a);
    for(i=10;i>0;i--){
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}