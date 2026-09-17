char* intToRoman(int num)
{
    static char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    static char result[20];
    int i, pos = 0;

    for(i = 0; i < 13; i++)
    {
        while(num >= values[i])
        {
            num -= values[i];

            char *p = symbols[i];
            while(*p != '\0')
            {
                result[pos++] = *p;
                p++;
            }
        }
    }

    result[pos] = '\0';

    return result;
}
