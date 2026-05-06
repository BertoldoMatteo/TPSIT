#include <stdio.h>

void ordina3(int *a, int *b, int*c) {
    int temp;
    if (*b <= *a && *b <= *c) {
        temp = *b;
        *b = *a;
        *a = temp;
    }else if (*c <= *a && *c <= *b) {
        temp = *c;
        *c = *a;
        *a = temp;
    }
    if (*c <= *b) {
        temp = *c;
        *c = *b;
        *b = temp;
    }


}

int main(void) {
    int a, b, c;
    printf("Inserisci tre numeri\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    ordina3(&a,&b,&c);
    printf("I numeri in ordine sono : %d, %d, %d", a, b, c);
    return 0;
}
