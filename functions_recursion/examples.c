// #include<stdio.h>
// void hello();
// void bye();
//     int main()
// {
//     hello();
//     bye();
//     return 0;
// }
// void hello(){
//     printf("hello\n");
// }
// void bye(){
//     printf("bye\n");
// }



// #include<stdio.h>
// void indian();
// void french();
//     int main()
// {
//     char a;
//     printf("enter (i) if u are indian or (f) if u r french");
//     scanf("%c",&a);
//     if(a=='i'){
//         indian();
//     }
//     else if(a=='f'){
//         french();
//     }
//     else{
//         printf("error");
//     }
//     return 0;
// }
// void indian(){
//     printf("NAMASTE");
// }
// void french(){
//     printf("BONJUR");
// }

#include<stdio.h>
void table(int a);
    int main()
{
    printf("enter number");
    int a;
    scanf("%d",&a);
    table(a);
    return 0;
}
void table(int a){
    for(int i=0;i<=10;i++){
        printf("%d\n",a*i);
    }
}