#include <stdio.h>
#include <stdlib.h>

int* twosum(int* nums, int numSize, int target, int* returnSize){
    int temp;
    for(int i = 0; i < numSize; i++){
        for(int j = i + 1; j < numSize; j++){
            temp = nums[i] + nums[j];
            if(target == temp){
                returnSize[0] = i;
                returnSize[1] = j;
            }
        }
    }
    return returnSize;
}

int main(){
    int nums[4] = {2, 7, 11, 15};
    int nums1[3] = {3, 2, 4};
    int target = 9;
    int target1 = 6;
    int returnTwoSum[2];

    twosum(nums, sizeof(nums)/sizeof(nums[0]), target, returnTwoSum);
    printf("Output: [%d, %d]\n", returnTwoSum[0], returnTwoSum[1]);
    twosum(nums1, sizeof(nums1)/sizeof(nums1[0]), target1, returnTwoSum);
    printf("Output1: [%d, %d]", returnTwoSum[0], returnTwoSum[1]);
    return 0;
}