int countDigits(int num) {

    int digit = 0;
    int count = 0;

    int nums = num;
    while (nums != 0){

        digit = nums % 10;
        if (digit != 0 && num % digit == 0){
            count++;
        }

        nums = nums / 10;
    }

    return count;
    
}