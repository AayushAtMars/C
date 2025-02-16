#include<stdio.h>
    int main()
{
    FILE*ptr;
    FILE*ptr2;
    ptr=fopen("3_file.txt","r");
    ptr2=fopen("3_file2.txt","w");
    char c=fgetc(ptr);
    while(c!=EOF){
        fputc(c,ptr2);
        c=fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}