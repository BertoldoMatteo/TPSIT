#include <stdio.h>

int main(void) { //Firma
    printf("Hello, World!\n");
    int n = 120;
    printf("Il valore decimale: \t%d\n", n); // \t è tab
    float f = 3.14;
    printf("Il valore float: %f\n", f);
    printf("Il valore float: %c\n", n); //variabili stringhe non esistono

    int m;

    printf("Scrivi un numero a caso: \n");
    scanf("%d", &m); //&m è indirizzo di m
    printf("%p",&m); //stampo indirizzo di memoria
    return 0;
}
