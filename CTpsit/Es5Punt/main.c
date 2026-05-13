#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr = malloc(5 * sizeof(int));
    printf("Array : [");
    for (int i = 0; i< 5; i++) {
        arr[i] = i*10;
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    printf("Elementi dell'array stampati tramite puntatore:\n");
    for (int i = 0; i< 5; i++) {
        int *p = &arr[i];
        printf("Elemento %d : %d \n",i, *p);
    }
    free(arr);
    arr = NULL;
    return 0;
}
