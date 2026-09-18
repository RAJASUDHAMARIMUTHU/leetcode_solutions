int maxDistinct(char* s) {
   
    int freq[26] = {0};
    int count = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';

        if(freq[index] == 0) {
            freq[index] = 1;
            count++;
        }
    }

    return count;
 
}