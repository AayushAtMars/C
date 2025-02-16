#include<stdio.h>
int fun(int x,int*s){
    *s=(10*x);

}
    int main()
{
    int x=10,s;

    fun(x,&s);
    printf("the value is %d",s);
    return 0;
}