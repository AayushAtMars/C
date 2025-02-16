#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(100 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the value for %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    free(ptr);

    for (int i = 0; i < 100; i++)
    {
        printf("the value for %d element is %d \n", i, ptr[i]);
    }
    return 0;
}