double findMaxAverage(int* nums, int numsSize, int k) {

    int maxAvg = 0;
    int sum = 0;

    int right = k;
    int left = 0;

    for (int i = 0; i < k; i++){
        sum = sum + nums[i];
    }

    int max = sum;

    while (right < numsSize){

        sum = sum + nums[right];
        sum = sum - nums[left];

        maxAvg = sum;

        if (maxAvg > max){
            max = maxAvg;
        }

        left++;
        right++;
    }

    return (double)max / k;
}