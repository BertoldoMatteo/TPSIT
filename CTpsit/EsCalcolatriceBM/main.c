#include <stdio.h>

int main(void) {

    float som = 0.0f, dif = 0.0f, mol= 1.0f, div= 0.0f;
    char operazione;

    printf("Inserisci quale operazione vuoi svolgere!\n");
    printf("SOMMA -> +\nDIFFERENZA -> -\nMOLTIPLICAZIONE -> *\nDIVISIONE ->/\n");
    scanf(" %c",&operazione);
    printf("Inserire il primo numero :");
    scanf("%f", &som);
    printf("\nInserisci il secondo numero : ");
    scanf("%f", &dif);
    switch (operazione)
    {
        case '+' :
            som += dif;
            printf("La somma dei due numeri : %.2f", som);
            break;
        case '-' :
            dif = som - dif;
            printf("La differenza dei due numeri : %.2f", dif);
            break;
        case '*' :
            mol = som * dif;
            printf("La moltiplicazione dei due numeri : %.2f", mol);
            break;
        case '/' :
            while (dif == 0.0f)
            {
                printf("Non e' possibile effettuare una divisione per zero\n secondo numero :");
                scanf("%f", &dif);
            }
            div = som / dif;
            printf("La divisione dei due numeri : %.2f", div);
            break;
        default :
            printf("Input non valido\n");
            main();
    }
    return 0;
}
