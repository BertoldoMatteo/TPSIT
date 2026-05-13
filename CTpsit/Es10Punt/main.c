#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr = malloc(2 * sizeof(int));
    int n = 0, count = 0,lim = 2;

    printf("Inserisci numeri (0 per terminare):\n");
    scanf("%d", &n);
    do {
        arr[count] = n;
        count++;
        if (count == lim) {
            arr = realloc(arr, 2 * lim * sizeof(int));
            lim*=2;
            printf("(Espansione a %d elementi)\n", lim);
        }
        scanf("%d", &n);
    }while (n != 0);

    printf("Numeri inseriti:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}