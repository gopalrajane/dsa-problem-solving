
int maxProfit(int* prices, int pricesSize) {

    int max = 0;
    int min = prices[0];

    for (int i = 1; i < pricesSize; i++) {

        if (prices[i] < min) {
            min = prices[i];
        }

        int diff = prices[i] - min;

        if (diff > max) {
            max = diff;
        }
    }

    return max;
}
