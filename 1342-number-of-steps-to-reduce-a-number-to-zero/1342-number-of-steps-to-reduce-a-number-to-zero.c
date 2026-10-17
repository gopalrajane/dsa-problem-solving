int numberOfSteps(int num) {

    int steps = 0;
    int nums = num;

    while (nums != 0){

        steps++;

        if (nums % 2 == 0){
            nums = nums / 2;
        } else {
            nums = nums - 1;
        }

    }
    
    return steps;
    
}