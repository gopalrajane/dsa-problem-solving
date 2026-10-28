int singleNumber(int* nums, int numsSize) {

    int singleNum;


    for (int i = 0; i < numsSize; i++){
        int count = 0;

        for (int j = 0; j < numsSize; j++){
            if (nums[i] == nums[j]){
                count++;
            }
        }

        if (count == 1){
            singleNum = nums[i];
        }
    }

    return singleNum;
    
}