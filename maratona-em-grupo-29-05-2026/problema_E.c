#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, k = 0, aux = 0, contador = 0;
    scanf("%d %d", &n, &k);
    int alturas[n], pos[n], neg[n], pos2[n], neg2[n];
    int auxpos = 0, auxneg = 0;
    while (aux < n) {
        scanf("%d", &alturas[aux]);
        aux++;
    }
    aux = 1;
    while (aux < n) {
        if (alturas[aux] > alturas[aux-1] + 1) {
            neg[auxneg] = aux + 1;
            neg2[auxneg] = alturas[aux] - (alturas[aux-1] + 1);
            auxneg++;
            contador++;
            alturas[aux] = alturas[aux-1] + 1;
        }
        if (alturas[aux] < alturas[aux-1] + 1) {
            pos[auxpos] = aux + 1;
            pos2[auxpos] = alturas[aux-1] + 1 - alturas[aux];
            auxpos++;
            contador++;
            alturas[aux] = alturas[aux-1] + 1;
        }
        aux++;
    }
    aux = 0;
    printf("%d", contador);
    if (contador == 0) {
        return 0;
    }
    if (auxpos != 0) {
        printf("\n+ ");
        while (aux < auxpos-1) {
            printf("%d %d ", pos[aux], pos2[aux]);
            aux++;
        }
        printf("%d %d", pos[auxpos - 1], pos2[auxpos - 1]);
    }
    aux = 0;
    if (auxneg != 0) {
        printf("\n- ");
        while (aux < auxneg - 1) {
            printf("%d %d ", neg[aux], neg2[aux]);
            aux++;
        }
        printf("%d %d", neg[auxneg - 1], neg2[auxneg - 1]);
    }
    return 0;
}