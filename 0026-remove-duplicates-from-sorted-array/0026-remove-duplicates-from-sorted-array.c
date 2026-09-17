int removeDuplicates(int* nums, int numsSize) {
    
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
           if(nums[i]==nums[j]){
                for(int k=j;k<numsSize-1;k++){
                    nums[k]=nums[k+1];
                }
                numsSize--;
                j--;
           }
        }
         
    }
   
    return numsSize;
}