#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t = 0, aux2 = 0, contador = 0, aux3 = 0;
    scanf("%d", &t);
    int l[t], r[t];
    while (aux3 < t) {
        scanf("%d %d", &l[aux3], &r[aux3]);
        aux3++;
    }
    aux3 = 0;
    while (aux3 < t) {
    unsigned long long aux[17];
    while (aux2 < r[aux3]) {
        if (aux2%2 == 0) {
            aux[aux2] = sqrt(pow(10, aux2 + 1)) + 1 - sqrt(pow(10, aux2));
        } else {
            aux[aux2] = sqrt(pow(10, aux2 + 1)) - (sqrt(pow(10, aux2)));
        }
        aux2++;
    }
    aux2 = l[aux3] - 1;
    while (aux2 < r[aux3]) {
        contador = contador + aux[aux2];
        aux2++;
    }
    printf("%d", contador);
    aux3++;
    if (aux3 != t) {
        printf("\n");
    }
    contador = 0;
    }

    return 0;
}