#include <stdio.h>
#include <stdlib.h>
int* twosum(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*) malloc(2*sizeof(int));
    *returnSize = 2;

    int i, j;
    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}
void main(){
    int nums[] = {2,7,11,15};
    int length = sizeof(nums)/sizeof(nums[0]);
    int target = 9;
    int resultSize;
    int* result = twosum(nums, length, target, &resultSize);
    printf("[%d,%d]", result[0], result[1]);
}