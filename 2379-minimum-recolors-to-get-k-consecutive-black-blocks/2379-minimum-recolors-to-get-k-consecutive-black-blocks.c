int minimumRecolors(char* blocks, int k) {
    int left = 0;
    int black = 0;
    int maxBlack = 0;

    for(int right = 0; blocks[right] != '\0'; right++) {

        if(blocks[right] == 'B') {
            black++;
        }

        if(right - left + 1 == k) {

            maxBlack = black > maxBlack ? black : maxBlack;

            if(blocks[left] == 'B') {
                black--;
            }

            left++;
        }
    }

    return k - maxBlack;
}