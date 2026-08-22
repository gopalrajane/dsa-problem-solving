/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdbool.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int temp;

    for (int i = 0; i < nums1Size - 1; i++) {

        for (int j = 0; j < nums1Size - i - 1; j++) {

            if (nums1[j] > nums1[j + 1]) {

                temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }

    int* inter = malloc(sizeof(int) * nums2Size);

    int count = 0;

    for (int i = 0; i < nums2Size; i++) {

        int low = 0;
        int high = nums1Size - 1;
        bool found = false;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums2[i] == nums1[mid]) {
                found = true;
                break;
            }
            else if (nums2[i] < nums1[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if (found) {

            bool alreadyPresent = false;

            for (int j = 0; j < count; j++) {

                if (inter[j] == nums2[i]) {
                    alreadyPresent = true;
                    break;
                }
            }

            if (!alreadyPresent) {
                inter[count] = nums2[i];
                count++;
            }
        }
    }

    *returnSize = count;

    return inter;
}