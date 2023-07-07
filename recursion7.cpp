#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary representation: ");
    decimalToBinary(decimal);

    return 0;
}
