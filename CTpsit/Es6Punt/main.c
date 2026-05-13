#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int* arr = malloc(6 * sizeof(int));
    printf("Array originale: ");
    for (int i = 0; i < 6; i++) {
        arr[i] = i;
        printf("%d", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 3;i++) {
        swap(&arr[i], &arr[5-i]);
    }

    printf("Array invertito: ");
    for (int i = 0; i < 6; i++) {
        printf("%d", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}
