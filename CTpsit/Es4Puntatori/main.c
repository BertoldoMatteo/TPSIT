#include <stdio.h>
#include <stdlib.h> //per malloc

void modifica(int *p) {
    *p = *p * 2 ;
}

int main(void) {
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Errore di allocazione nella memoria!!");
        return 1;
    }
    printf("Inserisci un numero!\n");
    scanf("%d", p);
    modifica(p);
    printf("Il doppio vale : %d\n", *p);
    free(p); //libero lo spazio di memoria

    return 0;
}
