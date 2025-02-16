//using for loop

/*#include<stdio.h>
    int main()
{
    int a,n,b=1;
    printf("enter the no ");
    scanf("%d",&a);
    for(n=1;n<=a;n++){
        b=b*n;
    }
    printf("the factorial of %d is %d ",a,b);
    return 0;
}*/

//using while loop

#include<stdio.h>
    int main()
{
    int a,b=1;
    printf("enter the no ");
    scanf("%d",&a);
    while(a>0){
        b=b*a;
        a--;
    }
    printf("the factorial of %d is %d ",a,b);
    return 0;
}