int largestAltitude(int* gain, int gainSize) {
    int *nums2=malloc((gainSize+1) * sizeof(int));
    
    nums2[0]=0;
    int max=nums2[0];
    for(int i=0;i<gainSize;i++){
        nums2[i+1]=nums2[i]+gain[i];
       
    }
    for(int i=1;i<=gainSize;i++){
     max=nums2[i]>=max?nums2[i]:max;
    }
  
   return max;
    

    
    
}
