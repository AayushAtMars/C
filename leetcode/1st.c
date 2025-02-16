#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * mergeAlternately(char * word1, char * word2){
int l1=strlen(word1);
int l2=strlen(word2);
// printf("%d\n",l1);
// printf("%d\n",l2);
//int returnSize=l1+l2;
char* result = malloc((l1+l2)*sizeof(char));
int r=0;
for(int i=0;i<l1||i<l2;i++){
    if(i<l1){
        //printf("%c",word1[i]);
        result[r]=word1[i];
        r++;
    }
    if(i<l2){
        //printf("%c",word2[i]);
        result[r]=word2[i];
        r++;
    }
    result[r]='\0';
    // printf("%d\n",i);
    // printf("%c\n",word1[i]);
    // printf("%c\n",word2[i]);
}
return result;
}
int main(){
    char *word1 = "abc";
    char *word2 = "pqr";
    printf("%s",mergeAlternately(word1,word2));
    
    return 0;
}
