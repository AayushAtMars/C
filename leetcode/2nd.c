#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* array=malloc(2*sizeof(int));
    *returnSize=2;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
             if(nums[i]+nums[j]==target){
                array[0]=i;
                array[1]=j;
                return array;
            }   
        }
    } 
    //return -1;
    // printf("%d",array[0]);
    // printf("%d",array[1]);
}
int main(){
    int nums[] = {3,2,4};
    int target = 6;
    int numsSize=4;
    int returnSize;
    int *ptr=twoSum(nums,numsSize,target,returnSize);
    // for(int j=0;j<2;j++){
    //     printf("%d",&a[j]);
    // }
    printf("%d",ptr[0]);
    printf("%d",ptr[1]);
    return 0;
}