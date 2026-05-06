#include <stdio.h>

void MinMax(int *a, int *b, int *c) {
    if (*a >= *b && *a >= *c) *c = *a;
    if (*b >= *a && *b >= *c ) *c = *b;
}

int main(void) {
    int a,b,c;
    printf("Inserisci il primo numero\n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero\n");
    scanf("%d", &b);
    printf("Inserisci il terpo numero\n");
    scanf("%d", &c);
    MinMax(&a,&b,&c);
    printf("Il minimo tra questi numeri e' %d", c);
    return 0;
}
