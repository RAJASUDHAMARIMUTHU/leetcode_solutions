double findMaxAverage(int* nums, int numsSize, int k) {
    int sum=0;
    int maxsum;
    for(int i=0;i<k;i++){
       sum=sum+nums[i];
    }
    maxsum=sum;
    for(int i=k;i<numsSize;i++){
        sum=sum+nums[i]-nums[i-k];
        if(sum>maxsum){
            maxsum=sum;
        }
       
    }
    return (double)maxsum/k;
}