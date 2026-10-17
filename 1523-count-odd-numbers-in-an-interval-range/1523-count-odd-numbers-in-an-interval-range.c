int countOdds(int low, int high){

    int low_count = low / 2;
    int high_count = (high + 1) / 2;

    return high_count - low_count;

}