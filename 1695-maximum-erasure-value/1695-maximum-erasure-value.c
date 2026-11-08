int maximumUniqueSubarray(int* nums, int numsSize) {
    int freq[10001] = {0};
    long long window_sum = 0;
    long long max_sum = 0;
    int left = 0;

    for (int right = 0; right < numsSize; right++) {
        window_sum += nums[right];
        freq[nums[right]]++;

        while (freq[nums[right]] > 1) {
            freq[nums[left]]--;
            window_sum -= nums[left];
            left++;
        }

        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return (int)max_sum;
}