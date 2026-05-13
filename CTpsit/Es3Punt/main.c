#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float* n = malloc(sizeof(float));

    printf("Inserisci un numero!\n");

    scanf("%f", n);
    *n = *n * (12.0/10.0);
    printf("Valore aumentato del 20% = %.2f\n", *n);
    free(n);
    n = NULL;
    return 0;
}
