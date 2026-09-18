
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int count = 0;
    int *result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] == nums[j]) {
                result[count] = nums[i];
                count++;
                break;
            }
        }

        if (count == 2)
            break;
    }

    *returnSize = count;
    return result;
}