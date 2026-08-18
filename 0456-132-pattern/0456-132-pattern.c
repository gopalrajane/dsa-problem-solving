bool find132pattern(int* nums, int numsSize)
{
    if (numsSize < 3)
        return false;

    int stack[numsSize];
    int top = -1;

    int second = -2147483648;

    for (int i = numsSize - 1; i >= 0; i--)
    {
        if (nums[i] < second)
            return true;

        while (top >= 0 && nums[i] > stack[top])
        {
            second = stack[top];
            top--;
        }
        stack[++top] = nums[i];
    }

    return false;
}