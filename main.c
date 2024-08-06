#include <stdio.h>

int decimalToBinary(int n) {
    int binary = 0, multiplier = 1;
    int isNegative = n < 0;

    if (isNegative) {
        n = -n;
    }

    while (n > 0) {
        binary += (n % 2) * multiplier;
        n /= 2;
        multiplier *= 10;
    }

    if (isNegative) {
        int inverted = ~binary;
        binary = inverted + 1;
    }

    return binary;
}

int main() {
    int decimalNum, binaryNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    binaryNum = decimalToBinary(decimalNum);

    printf("Binary equivalent: %d\n", binaryNum);

    return 0;
}
