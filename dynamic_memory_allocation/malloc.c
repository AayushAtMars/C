// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
    // //size of operator
    // printf("Size of integer in my computer is %d\n",sizeof(int));
    // printf("Size of float in my computer is %d\n",sizeof(float));
    // printf("Size of character in my computer is %d\n",sizeof(char));
    //     int *ptr;
    //     ptr=(int*)malloc(6*sizeof(int));
    //     for(int i=0;i<6;i++){
    //         printf("enter the value for %d element: ",i);
    //         scanf("%d",&ptr[i]);
    //     }

    //     for(int i=0;i<6;i++){
    //         printf("the value for %d element is %d \n",i,ptr[i]);
    //     }
    //     return 0;
    // }

#include <stdio.h>
#include <stdlib.h>
    int main()
    {
        float *ptr;
        ptr = (float *)malloc(6 * sizeof(float));
        for (int i = 0; i < 6; i++)
        {
            printf("enter the value for %d element: ", i);
            scanf("%f", &ptr[i]);
        }

        for (int i = 0; i < 6; i++)
        {
            printf("the value for %d element is %f \n", i, ptr[i]);
        }
        return 0;
    }