#include <stdio.h>

void Aggiorna(int *x, int *y) {
    *x = *x + *y;
    *y = *x -(2*(*y));
}

int main(void) {
    int x, y;
    printf("Inserisci il primo numero");
    scanf("%d", &x);
    printf("Inserisci il secondo numero");
    scanf("%d", &y);
    Aggiorna(&x,&y);
    printf("La somma dei due numeri = %d\n", x);
    printf("La somma dei due numeri = %d", y);
    return 0;
}
