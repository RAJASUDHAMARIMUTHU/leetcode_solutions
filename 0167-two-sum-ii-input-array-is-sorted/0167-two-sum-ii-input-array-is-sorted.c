int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *nums2 = malloc(2 * sizeof(int));

    int low = 0;
    int high = numbersSize - 1;

    while (low < high) {

        int sum = numbers[low] + numbers[high];

        if (sum == target) {
            nums2[0] = low + 1;
            nums2[1] = high + 1;
            *returnSize = 2;
            return nums2;
        }
        else if (sum < target) {
            low++;
        }
        else {
            high--;
        }
    }

    *returnSize = 0;
    free(nums2);
    return NULL;
}