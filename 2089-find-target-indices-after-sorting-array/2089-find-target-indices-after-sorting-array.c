/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {

    int *nums2 = malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            nums2[*returnSize] = i;
            (*returnSize)++;
        }
    }

    return nums2;
}