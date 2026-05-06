#include <stdio.h>

int n = 0; //variabile globale
int main(void) {
    printf("Indirizzo di memoria variabile globale: %p\n", &n);

    int n = 1; //variabile locale al Main
    printf("Valore locale main: %p\n", &n);
    {
        int n = 2; //variabile locale al blocco
        printf("Valore locale di blocco: %p\n", &n);
    }
    return 0;
}
