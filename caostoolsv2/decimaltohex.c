#include <stdio.h>

void decimal_to_hex(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }

    int remainder;
    char hex[50];
    int i = 0;
    while (decimal != 0) {
        remainder = decimal % 16;
        if (remainder < 10)
            hex[i] = 48 + remainder;
        else
            hex[i] = 55 + remainder;
        i++;
        decimal = decimal / 16;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);
    printf("The hexadecimal representation of %d is: ", decimal_number);
    decimal_to_hex(decimal_number);
    printf("\n");
    return 0;
}