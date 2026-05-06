#include <stdio.h>

int main(void) {
    int n = 0;
    int fatt = 1;
    printf("Inserisci un numero intero e il programma calcolera' il suo fattoriale\n");
    scanf("%d", &n);
    while (n % 2 == 0 || n<0 || n>100)
    {
        printf("Inserisci un numero dispari tra 0 e 100\n");
        scanf("%d", &n);
    }
    for (int i = n; i > 0; i--)
    {
        fatt *= i;
    }
    printf("Il fattoriale di %d e' %d\n", n, fatt);
    return 0;
}
