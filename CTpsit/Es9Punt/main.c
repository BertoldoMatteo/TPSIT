#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertiArray(char** f, int dim){
    for (int i = 0; i < dim/2; i++) {
        char* temp = f[i];
        f[i] = f[dim-i-1];
        f[dim-i-1] = temp;
    }
}

int main(void) {
    int n;
    char buffer[100];

    printf("Quante parole vuoi inserire?\n");
    scanf("%d", &n);

    char** f = malloc(n* sizeof(char**));

    for (int i = 0; i < n; i++) {
        printf("Parola (%d) : ", i+1);
        scanf("%s", buffer);
        f[i] = malloc((strlen(buffer)+1)*sizeof(char));
        strcpy(f[i], buffer);
    }
    invertiArray(f, n);

    printf("Parole in ordine inverso:\n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", f[i]);
        free(f[i]);
    }

    free(f);
    f = NULL;
    return 0;
}
