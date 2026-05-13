#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplica_stringa(const char *s) {
    int lunghezza = strlen(s) +1;
    char *duplica = malloc(lunghezza * sizeof(char));

    if (duplica == NULL) {
        return NULL;
    }

    strcpy(duplica, s);

    return duplica;
}

int main(void) {
    char* string = "Esercitazione Puntatori";
    printf("%s\n", string);
    char* duplica = duplica_stringa(string);

    if (duplica != NULL) {
        printf("Originale: %s\n", string);
        printf("Copia: %s\n", duplica);

        // Fondamentale: liberare la memoria allocata dalla funzione
        free(duplica);
        duplica = NULL;
    } else {
        printf("Errore di allocazione memoria.\n");
    }

    return 0;
}
