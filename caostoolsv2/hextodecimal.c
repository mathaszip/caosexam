#include <stdio.h>

int main () {
    int input;

    printf("Enter a hexadecimal: \n");
    scanf("%x", &input);

    printf("Decimal representation of the hexadecimal: %x \n", input);
    printf("%d", input);
}