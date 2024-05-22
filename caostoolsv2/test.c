#include <stdio.h>

void printArray(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%ld %lx \n", arr[i], arr[i]);
    }
}

void swap(long *element1, long *element2) {
    long temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}

int main() {
    long arr[20];

    for (int i = 0; i < 20; i++) {
        arr[i] = 10 + i;
    }

    long *x = &arr[3];  // pointer to the 4th element
    printf("Address of x: %p\n", x);
    printf("Address of arr: %p\n", arr);
    printf("Value pointed by x: %ld\n", *x);  // dereferencing x

    swap(&arr[0], &arr[5]);

    long y = *(x + 100000);

    printf("%lx\n", y);

    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}