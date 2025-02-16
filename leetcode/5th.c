#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize)
{
    char *result=malloc(strsSize*sizeof(char));
    int m=0;
    for(int i=0;i<4;i++){
        for(int ii=0;ii<4;ii++){
            for(int iii=0;iii<4;iii++){
                if(strs[0][i]==strs[1][ii]&&strs[0][i]==strs[2][iii]){
                    result[m]=strs[0][i];
                    m++;
                }
            }
        }
    }
    result[m]='\0';
    //return result;
    printf("%s",result);
}
int main(){
       char strs[3][40] = {"flaower","flaow","flight"};
       int strsSize=3;
       longestCommonPrefix(strs,strsSize);
}