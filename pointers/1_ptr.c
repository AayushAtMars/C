    #include<stdio.h>
        int main()
    {
        int i;
        printf("enter the integer : ");
        scanf("%d",&i);
        int*j=&i;
        printf("\n");
        printf("the address of the integer is %u\n",j);
        printf("the address of the integer is %u\n",&i);
        printf("\n");
        printf("the value is : %d",*j);
        return 0;
    }