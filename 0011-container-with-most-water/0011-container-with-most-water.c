int maxArea(int* height, int heightSize) {
    int len=0;
    int left=0;
    int right=heightSize-1;
    int max=0;
    while(left<right){
        int h;
       if(height[left]<height[right]){
         h=height[left];

       } 
       else{
        h=height[right];
       }
       len=right-left;
       int area=len*h;
       if(area>max){
        max=area;
       }
       
       if(height[left]<height[right]){
        left++;
       }
       else{
        right--;
       }
    }
      return max;
    }