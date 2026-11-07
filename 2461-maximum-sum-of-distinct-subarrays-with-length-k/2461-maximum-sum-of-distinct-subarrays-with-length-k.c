long long maximumSubarraySum(int* nums, int numsSize, int k) {

    int freq[100001] = {0};
    long long window_sum = 0;
    long long max_sum = 0;

    int distinct_count = 0;

    for (int i = 0; i < numsSize; i++){
        
        if (freq[nums[i]] == 0){
            distinct_count++;
        }

        freq[nums[i]]++;
        window_sum += nums[i];

        if (i >= k){
            int left_val = nums[i - k];
            freq[left_val]--;

            window_sum -= left_val;
            if (freq[left_val] == 0){
                distinct_count--;
            }
        }


        if ( i >= k -1 && distinct_count == k){
            if (window_sum > max_sum){
                max_sum = window_sum;
            }
        }
    }
    

    return max_sum;

    
}