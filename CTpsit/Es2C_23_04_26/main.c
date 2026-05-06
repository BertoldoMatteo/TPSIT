#include <stdio.h>

int n= 67; //variabile locale

int main(void) {
    int somma = 0; //fortemente tipizzato
    int n=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0; //utilizza valore vecchio in memoria, meglio usare =0
    float media = 0;
    printf("Inserisci 10 valori compreso tra 3 e 9 e calcolero' la somma!\n");
    for (int i=1; i<=10; i++) {
        do {
            printf("Inserisci valore %d : ",i);
            scanf("%d",&n);//tipo di valore, &variabile -> indirizzo di memoria
            while (getchar() != '\n'); //prende_carattere_dal_buffer
        }while (n<3 || n>9 || n%2 == 0);
        somma += n;
    }

    media = somma / 10.0;
    printf("La somma vale %d\n", somma);
    printf("La media vale %f", media);
    return 0;
    //più input e output
    // scanf("%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d",&n ,&n1 ,&n2 ,&n3 ,&n4 ,&n5 ,&n6 ,&n7 ,&n8 ,&n9);
    // printf("%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d",n ,n1 ,n2 ,n3 ,n4 ,n5 ,n6 ,n7 ,n8 ,n9);

    // {
    //     int n=67;
    // }  //valore locale != globale

    //int occupa 4 byte (32 bit) (2^32 -1 possibili valori)
    //char occupa 1 byte (8 bit) (255 possibili valori)
}