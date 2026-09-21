int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {

    int count = 0;
    int product;

    for(int i = 0; i < numsSize; i++) {

        product = 1;

        for(int j = i; j < numsSize; j++) {

            product = product * nums[j];

            if(product < k) {
                count++;
            }
            else {
                break;
            }
        }
    }

    return count;
}