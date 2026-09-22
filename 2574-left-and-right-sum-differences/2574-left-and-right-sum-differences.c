/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *left=malloc(numsSize * sizeof(int));
      left[0]=0;
    int *right=malloc(numsSize * sizeof(int));
    right[numsSize -1]=0;
    int *answer=malloc(numsSize * sizeof(int));
   
    
    for(int i=1;i<numsSize;i++){
        left[i]=left[i-1]+nums[i-1];
    }
     for(int i=numsSize-2;i>=0;i--){
        right[i]=right[i+1]+nums[i+1];
    }
    for(int i=0;i<numsSize;i++){
        answer[i]=abs(left[i]-right[i]);
    }
    *returnSize = numsSize;
     return answer;


}