#include <stdio.h>

int main () {
    int input;

    printf("Enter a decimalnumber: \n");
    scanf("%d", &input);

    printf("Hexadecimal representation of the number: %d \n", input);
    printf("%x", input);
}