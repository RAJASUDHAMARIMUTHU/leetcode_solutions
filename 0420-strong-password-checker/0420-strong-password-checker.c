int strongPasswordChecker(char* password) {
    int n = strlen(password);

    int lower = 0, upper = 0, digit = 0;

    for (int i = 0; i < n; i++) {
        if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
    }

    int missing = (lower == 0) + (upper == 0) + (digit == 0);

    int replace = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < n; ) {
        int j = i;

        while (j < n && password[j] == password[i])
            j++;

        int len = j - i;

        if (len >= 3) {
            replace += len / 3;

            if (len % 3 == 0)
                one++;
            else if (len % 3 == 1)
                two++;
        }

        i = j;
    }

    
    if (n > 20) {
        int delete = n - 20;
        int use = delete < one ? delete : one;
        replace -= use;
        delete -= use;
         use = delete / 2;

        if (use > two)
            use = two;

        replace -= use;
        delete -= use * 2;
        replace -= delete / 3;

        if (replace < 0)
            replace = 0;

        return (n - 20) + (missing > replace ? missing : replace);
    }

    
    if (n < 6) {
        int insert = 6 - n;

        return insert > missing ? insert : missing;
    }

    return missing > replace ? missing : replace;
}