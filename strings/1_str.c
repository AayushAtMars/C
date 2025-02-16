#include<stdio.h>
#include<string.h>
    int main()
{
    char str1[31];
    char str2[31];
    int i =0;
    char c;
    printf("enter 1st string \n");
    scanf("%s",str1);
    printf("enter 2nd string \n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';

    printf("1st string is %s\n",str1);
    printf("2st string is %s\n",str2);
    printf("strcmp for this string returns %d",strcmp(str1,str2));
    return 0;
}