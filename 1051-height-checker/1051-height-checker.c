int heightChecker(int* heights, int heightsSize) {

    int n = heightsSize;
    int new_heights[n];
    int temp;
    int count = 0;

    for (int i = 0; i < n; i++){
        new_heights[i] = heights[i];
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (heights[j] > heights[j+1]){
                temp = heights[j];
                heights[j] = heights[j+1];
                heights[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if (heights[i] != new_heights[i]){
            count += 1;
        }
    }

    return count;
    
}