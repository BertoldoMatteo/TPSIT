#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int x = 6;
    int y = 7;
    printf("Valore di x : %d\n", x);
    printf("Valore di y : %d\n", y);
    swap(&x, &y);
    printf("SWAP\n");
    printf("Valore di x : %d\n", x);
    printf("Valore di y : %d\n", y);

    return 0;
}
