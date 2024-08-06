#include <stdio.h>

int dec2bin(int n) {
    int binary = 0, tracker = 1;
    int neg = n < 0;

    if (neg) {
        n = -n;
    }

    while (n > 0) {
        binary += (n % 2) * tracker;
        n /= 2;
        tracker *= 10;
    }

    if (neg) {
        int inverted = ~binary;
        binary = inverted + 1;
    }

    return binary;
}

int main() {
    int dec, bin;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    bin = dec2bin(dec);

    printf("The binary equivalent: %d\n", bin);

    return 0;
}
