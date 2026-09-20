void moveZeroes(int* nums, int numsSize) {
    int j=0;
    int temp;
    for(int i=0;i<numsSize;i++){
          if(nums[i]!=0){
            temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            j++;
            
          }
    }
         
    
}