#include <stdio.h>
#include <stdlib.h>

void decimal_to_binary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    decimal = abs(decimal);  // take absolute value of decimal

    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);
    printf("The binary representation of %d is: ", decimal_number);
    decimal_to_binary(decimal_number);
    printf("\n");
    return 0;
}