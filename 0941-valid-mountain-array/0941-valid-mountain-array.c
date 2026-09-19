bool validMountainArray(int* arr, int arrSize) {
   if(arrSize<3){
    return false;
   }
   int low=0;
   int high=arrSize-1;
   while(low<arrSize-1 && arr[low]<arr[low+1]){
       low++;
   }
   while(high>0 && arr[high]<arr[high-1]){
      high--;
   }
   if(low==0 || high==arrSize-1){
       return false;
   }
      return low==high;
}