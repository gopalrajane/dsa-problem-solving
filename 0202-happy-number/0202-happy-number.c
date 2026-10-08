bool isHappy(int n) {

    int nums[1000] = {0};

    while (n != 1){

        int digiSum = 0;

        while (n > 0){
            int digit = n % 10;
            digiSum = digiSum + digit * digit;
            n = n / 10;
        }
        
        n = digiSum;

        if(nums[n] == 1){
            return false;
        }

        nums[n] = 1;

    }

    return true;
    
}
