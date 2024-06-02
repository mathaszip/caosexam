#include <stdio.h>

int main() {
    int decimal_number;
    printf("Enter a decimal number: \n");
    scanf("%d", &decimal_number);
    printf("The binary representation of %d is: \n", decimal_number);

    int binary_number[32];

    int i = 0;
    while (decimal_number > 0) {
        binary_number[i] = decimal_number % 2;
        decimal_number = decimal_number / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_number[j]);
    }
    
    return 0;
}