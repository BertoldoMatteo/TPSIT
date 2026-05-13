#include <stdio.h>

int main(void) {

    int n = 67;
    int* p = &n;
    printf("Valore di n : %d\n", n);
    printf("Indirizzo di n : %p\n", p);
    printf("Valore puntato da ptr : %d\n", *p);

    *p = 1;
    printf("Nuovo valore tramite puntatore : %d\n", *p);
    return 0;
}
