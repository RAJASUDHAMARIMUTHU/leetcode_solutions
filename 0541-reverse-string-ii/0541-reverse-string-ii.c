char* reverseStr(char* s, int k) {
    int length = strlen(s);

    char *s1 = malloc((length + 1) * sizeof(char));

    int j = 0;

    for (int start = 0; start < length; start += 2 * k) {

        int end = start + k - 1;

        if (end >= length)
            end = length - 1;

        for (int i = end; i >= start; i--) {
            s1[j] = s[i];
            j++;
        }

        for (int i = start + k; i < start + 2 * k && i < length; i++) {
            s1[j] = s[i];
            j++;
        }
    }

    s1[length] = '\0';

    return s1;
}