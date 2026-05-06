#include <stdio.h>
#include <math.h>

int main(void) {
    char cognome, nome;
    int age;
    float scarpe;
    printf("Inserisci l'iniziale del tuo cognome!\n");
    scanf(" %c", &cognome); //devo mettere lo spazio se no mi prende come carattere l'invio
    printf("Inserisci l'iniziale del tuo nome!\n");
    scanf(" %c" ,&nome);
    printf("Inserisci la tua eta'!\n");
    scanf("%d", &age);
    while(age < 0 || age > 124)
    {
        printf("Inserisci la tua VERA eta'!\n");
        scanf("%d", &age);
    }

    printf("Inserisci la tua taglia di scarpe!\n");
    scanf("%f", &scarpe);
    while (fmodf(scarpe, 0.5f) != 0.0f || scarpe < 15 || scarpe > 60)
    {
        printf("Inserisci una VERA taglia di scarpe!\n");
        scanf("%f", &scarpe);
    }
    printf("RIEPILOGO\n");
    printf("Cognome : %c \nNome : %c \nEta' : %d \nScarpe : %.1f ", cognome , nome , age , scarpe);
    return 0;
}
