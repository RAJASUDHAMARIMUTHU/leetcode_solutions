int maxArea(int* height, int heightSize) {
    int max=0;
    int left=0;
    int area;
    int right=heightSize-1;
    while(left<right){
        int h;
        if(height[left]<height[right]){
            h=height[left];
        }
        else{
            h=height[right];
        }
    
    int width=right-left;
    area=h*width;
    
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