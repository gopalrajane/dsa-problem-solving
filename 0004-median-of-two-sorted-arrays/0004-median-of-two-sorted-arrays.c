double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int i = 0, j = 0, k = 0;

    int size = nums1Size + nums2Size;
    int nums[size];

    while (i < nums1Size && j < nums2Size) {

        if (nums1[i] < nums2[j]) {
            nums[k] = nums1[i];
            i++;
        } else {
            nums[k] = nums2[j];
            j++;
        }

        k++;
    }

    while (i < nums1Size) {
        nums[k] = nums1[i];
        i++;
        k++;
    }

    while (j < nums2Size) {
        nums[k] = nums2[j];
        j++;
        k++;
    }

    int mid = size / 2;

    if (size % 2 == 0) {
        return (nums[mid - 1] + (double)nums[mid]) / 2.0;
    } else {
        return nums[mid];
    }
}