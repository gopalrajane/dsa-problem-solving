
int maximumSwap(int num) {

    char s[12];
    sprintf(s, "%d", num);


    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (s[j] >= s[maxIndex]) {
                maxIndex = j;
            }
        }

        if (s[maxIndex] > s[i]) {

            char temp = s[i];
            s[i] = s[maxIndex];
            s[maxIndex] = temp;
            break;
        }
    }

    return atoi(s);
}
