//using while loop
/*#include<stdio.h>
    int main()
{
    int a,b=0;
    printf("enter the no");
    scanf("%d",&a);
    while(a>0){
        b=b+a;
        a--;
    }
    printf("%d",b);
    return 0;
}*/


//using for loop
#include<stdio.h>
    int main()
{
    int a,sum=0;
    printf("enter the no\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    printf("the sum is %d",sum);
    float b=sum/a;
    printf("average is %f",b);
    return 0;
}