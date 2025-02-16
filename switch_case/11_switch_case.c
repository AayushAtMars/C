/*#include<stdio.h>
int main()
{
    int rating;
printf("give rating between (1-5)");
scanf("%d",&rating);
switch(rating){
    case 1:
       printf("your rating is 1\n");
       break;
    case 2:
       printf("your rating is 2\n");
       break;
    case 3:
       printf("your rating is 3\n");
       break;
    case 4:
       printf("your rating is 4\n");
       break;
    case 5:
       printf("your rating is 5\n");
       break;
    default:
    printf("invalid rating");
    return 0;
}
}*/

#include<stdio.h>
int main()
{
   int a;
   printf("enter four digit number");
   scanf("%d",&a);
   for(int i=1;i<=4;i++){
      int z = a%10;
      a=a/10;
      switch(z){
         case 1:
         printf("one ");
         break;
         case 2:
         printf("two ");
         break;
         case 3:
         printf("three ");
         break;
         case 4:
         printf("four ");
         break;
         case 5:
         printf("five ");
         break;
         case 6:
         printf("six ");
         break;
         case 7:
         printf("seven ");
         break;
         case 8:
         printf("eight ");
         break;
         case 9:
         printf("nine ");
         break;
         case 0:
         printf("zero ");
         break;
      }
   }
   return 0;
}
