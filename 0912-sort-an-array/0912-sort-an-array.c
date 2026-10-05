/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void merge(int* nums, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = nums[left + i];
    }

    for (int i = 0; i < n2; i++)
    {
        R[i] = nums[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            nums[k] = L[i];
            i++;
        }
        else
        {
            nums[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        nums[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        nums[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int* nums, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = (left + right) / 2;

    merge_sort(nums, left, mid);

    merge_sort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    merge_sort(nums, 0, numsSize - 1);

    *returnSize = numsSize;

    return nums;
}