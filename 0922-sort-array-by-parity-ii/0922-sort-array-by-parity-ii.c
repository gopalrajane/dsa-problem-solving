/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {

    int temp;
    
    for (int i = 0; i < numsSize; i++){

        if (nums[i] % 2 == 0 && i % 2 != 0){

            for (int j = i + 1; j < numsSize; j++){

                if (nums[j] % 2 != 0){

                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;

                    break;
                }
            }
        }

        else if (nums[i] % 2 != 0 && i % 2 == 0){

            for (int k = i + 1; k < numsSize; k++){
                
                if (nums[k] % 2 == 0){

                    temp = nums[i];
                    nums[i] = nums[k];
                    nums[k] = temp;

                    break;
                }
            }
        }
    }
    
    *returnSize = numsSize;

    return nums;
}