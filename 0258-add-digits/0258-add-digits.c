int addDigits(int num) {

    int nums = 0;

    while (num != 0){

        int digit = num % 10;
        nums = nums + digit;

        num = num / 10; 
    }

    if (nums > 9){
        return addDigits(nums);
    }


    return nums;
}