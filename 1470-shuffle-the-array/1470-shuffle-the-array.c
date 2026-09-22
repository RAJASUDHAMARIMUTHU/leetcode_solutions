

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
     int *nums2=malloc(numsSize * sizeof(int));
    nums2[0]=nums[0];
     for(int i=0;i<n;i++){
            nums2[2*i] = nums[i];
        nums2[2*i+1] = nums[i+n];
 
             
     }

     *returnSize=numsSize;
     return nums2;
}

     