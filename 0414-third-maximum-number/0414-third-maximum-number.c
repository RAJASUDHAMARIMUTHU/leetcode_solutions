#include <limits.h>

int thirdMax(int* nums, int numsSize)
{
    long firstmax = LONG_MIN;
    long secondmax = LONG_MIN;
    long thirdmax = LONG_MIN;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == firstmax ||
            nums[i] == secondmax ||
            nums[i] == thirdmax)
        {
            continue;
        }
        if (nums[i] > firstmax)
        {
            thirdmax = secondmax;
            secondmax = firstmax;
            firstmax = nums[i];
        }
        else if (nums[i] > secondmax)
        {
            thirdmax = secondmax;
            secondmax = nums[i];
        }
        else if (nums[i] > thirdmax)
        {
            thirdmax = nums[i];
        }
    }
    if (thirdmax == LONG_MIN)
    {
        return (int)firstmax;
    }

    return (int)thirdmax;
}