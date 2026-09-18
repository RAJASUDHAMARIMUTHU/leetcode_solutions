/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int index = 0;
    int *arr = malloc(numsSize * sizeof(int));

    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < pivot){
            arr[index] = nums[i];
            index++;
        }
    }

    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == pivot){
            arr[index] = nums[i];
            index++;
        }
    }

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > pivot){
            arr[index] = nums[i];
            index++;
        }
    }

    *returnSize = numsSize;

    return arr;
}