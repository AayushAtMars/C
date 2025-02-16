//ROMAN TO INTEGER

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.





#include<stdio.h>
#include<string.h>
int romanToInt(char* s) {
   int t[]={['I']=1,
   ['V']=5,['X']=10,['L']=50,['C']=100,['D']=500,['M']=1000} ;
   int num=0;
   for(int i=0;i<strlen(s);i++){
       if(t[s[i]]<t[s[i+1]]){
           num=num-t[s[i]];
       }
           else{
              num=num+t[s[i]];  
           }
   }
   return num;
}
int main(){
    char*s="DCXXI";
    printf("%d",romanToInt(s));
    return 0;
}