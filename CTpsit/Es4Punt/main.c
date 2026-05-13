#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v;
    int n;
    int somtot = 0;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d",&v);
    int* som = malloc(v * sizeof(int));
    for (int i = 0; i< v; i++) {
        printf("Inserisci numero (%d) : ", i);
        scanf("%d", &n);
        som[i] = n;
        somtot += n;
    }
    printf("Somma totale : %d\n", somtot);

    free(som);
    som = NULL;
    return 0;
}
