int distributeCandies(int* candyType, int candyTypeSize) {
    int count = 0;
    int freq[200001] = {0};

    for(int i = 0; i < candyTypeSize; i++) {
        freq[candyType[i] + 100000]++;
    }

    for(int i = 0; i < 200001; i++) {
        if(freq[i] != 0) {
            count++;
        }
    }

    if(count <= candyTypeSize / 2) {
        return count;
    }
    else {
        return candyTypeSize / 2;
    }
}