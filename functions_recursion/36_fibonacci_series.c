#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 1;
    printf("enter the number of terms you want : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}