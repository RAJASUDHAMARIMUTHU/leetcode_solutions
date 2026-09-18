int digitFrequencyScore(int n) {
    int num=0;
    int freq[10]={0};
    while(n!=0){
    int index=n%10;
     freq[index]++;
     n=n/10;
    }
    for(int i=0;i<10;i++){
        num=num+(i * freq[i]);
    }
      return num;


}