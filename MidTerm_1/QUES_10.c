#include <stdio.h>

int maxOnesBetweenZeros(int num) {
    int maxOnes = 0;
    int currentOnes = 0;
    int foundZero = 0;

    while (num > 0) {
        int bit = num % 2;
        num = num / 2;

        if (bit == 1) {
            currentOnes++;
        } else {
            if (foundZero) {

                if (currentOnes > maxOnes) {
                    maxOnes = currentOnes;
                }
                currentOnes = 0;
            } else {
                foundZero = 1;
            }
        }
    }

    return maxOnes;
}

int main() {
    int testCase1 = 14;
    int testCase2 = 110;

    printf(" %d, Output: %d\n", testCase1, maxOnesBetweenZeros(testCase1));
    printf(" %d, Output: %d\n", testCase2, maxOnesBetweenZeros(testCase2));

    return 0;
}
