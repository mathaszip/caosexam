#include <stdio.h>
#include <string.h>
#include <math.h>

int hex_to_decimal(char *hex) {
    int len = strlen(hex);
    int base = 1;
    int decimal = 0;

    for (int i=len-1; i>=0; i--) {
        if (hex[i]>='0' && hex[i]<='9') {
            decimal += (hex[i] - 48)*base;
            base = base * 16;
        }
        else if (hex[i]>='A' && hex[i]<='F') {
            decimal += (hex[i] - 55)*base;
            base = base*16;
        }
    }

    return decimal;
}

int main() {
    char hex[50];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    printf("The decimal representation of %s is: %d\n", hex, hex_to_decimal(hex));
    return 0;
}