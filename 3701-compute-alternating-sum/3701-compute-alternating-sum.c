int alternatingSum(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<numsSize;i++){
        if(i%2==0){
            result=result+nums[i];
        }
        else{
            result=result-nums[i];
        }
    }
    return result;
}