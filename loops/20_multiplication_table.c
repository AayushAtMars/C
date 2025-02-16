//using while loop
/*#include<stdio.h>
    int main()
{
    int a;
    int i=1;
    printf("enter the no of which you want the table : \n");
    scanf("%d",&a);
    while(i<11) {
        printf ("%dx%d=%d\n",a,i,a*i);
        i++;
    }
    return 0;
}*/



//using for loop
#include<stdio.h>
    int main()
{
    int a,i;
    printf("enter the no");
    scanf("%d",&a);
    for(i=1;i<11;i++){
        printf("%d\n",a*i);    
    }
    return 0;
}