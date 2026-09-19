bool validMountainArray(int* arr, int arrSize){
    int i=0;
    if(arrSize<3)
    {
        return false;
    }
   while(i<arrSize-1 && arr[i]<arr[i+1])
   {
    i++;
   }
   if (i == 0 || i == arrSize - 1) {
        return false;
    }

   while(i<arrSize-1 && arr[i]>arr[i+1])
   {
    i++;
   }
   
      return i == arrSize - 1;
}