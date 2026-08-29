/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {

    int n = numsSize * 2;

    int* newNums = malloc(n * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        newNums[i] = nums[i];
        newNums[i + numsSize] = nums[i];
    }

    *returnSize = n;

    return newNums;
}