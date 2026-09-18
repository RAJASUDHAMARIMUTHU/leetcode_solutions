/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int *nums2;
    nums2 = malloc(2* numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++){
        nums2[i]=nums[i];
        nums2[i + numsSize] = nums[numsSize - i - 1];
    }
     *returnSize = 2 * numsSize;
       return nums2;
}
