#include <stdio.h>
#include <stdlib.h>

int* trova_massimo(int* array, int dim) {
    int* max = &array[0];
    for (int i = 1; i < dim; i++) {
        if (*max < array[i]) max = &array[i];
    }
    return max;
}

int main(void) {
    int* arr = malloc(5 * sizeof(int));

    arr[0] = 67;
    arr[1] = 3;
    arr[2] = 98;
    arr[3] = 102;
    arr[4] = 34;

    printf("Il valore massimo dell'array e' : %d \n", *trova_massimo(arr, 5));
    printf("Posizione indice : %p \n", trova_massimo(arr, 5)-&arr[0]);

    free(arr);
    arr = NULL;
    return 0;
}
