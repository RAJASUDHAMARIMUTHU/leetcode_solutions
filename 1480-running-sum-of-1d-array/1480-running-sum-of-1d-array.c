/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *nums2=malloc(numsSize * sizeof(int));
    nums2[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        nums2[i]=nums2[i-1]+nums[i];
    }
   *returnSize = numsSize;

    return nums2;
    free(nums2);
    
}