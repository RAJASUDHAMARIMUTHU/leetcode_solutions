int minSubArrayLen(int target, int* nums, int numsSize) {
    int left=0;
    int len=numsSize+1;
    int sum=0;
    for(int right =0;right<numsSize;right++){
        sum=nums[right]+sum;
        while(sum>=target){
            len=right-left+1<len?right-left+1:len;
              sum=sum-nums[left];
               left++;
        }
       
        
    }
    if(len==numsSize+1){
        return 0;
    }
return len;
}