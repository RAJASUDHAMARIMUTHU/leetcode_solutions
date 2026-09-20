/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *nums2 = malloc(2 * sizeof(int));

    nums2[0] = -1;
    nums2[1] = -1;
    *returnSize = 2;

    int left = 0;
    int right = numsSize - 1;
    int mid;

    // Find first occurrence
    while(left <= right) {
        mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            nums2[0] = mid;
            right = mid - 1;
        }
        else if(nums[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    // Find last occurrence
    left = 0;
    right = numsSize - 1;

    while(left <= right) {
        mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            nums2[1] = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return nums2;
}