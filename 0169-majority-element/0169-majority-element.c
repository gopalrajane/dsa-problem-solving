int count(int nums[], int left, int right, int target) {

    int c = 0;

    for (int i = left; i <= right; i++) {
        if (nums[i] == target) {
            c++;
        }
    }

    return c;
}

int majority(int nums[], int left, int right) {

    if (left == right) {
        return nums[left];
    }

    int mid = (left + right) / 2;

    int leftvalue = majority(nums, left, mid);
    int rightvalue = majority(nums, mid + 1, right);

    if (leftvalue == rightvalue) {
        return leftvalue;
    }

    int leftCount = count(nums, left, right, leftvalue);
    int rightCount = count(nums, left, right, rightvalue);

    if (leftCount > rightCount) {
        return leftvalue;
    }

    return rightvalue;
}

int majorityElement(int* nums, int numsSize) {

    int left = 0;
    int right = numsSize - 1;

    return majority(nums, left, right);
}