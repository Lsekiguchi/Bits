#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 0, k = 0, aux = 0, aux3 = 0, max = 0;
    scanf("%d %d", &n, &k);
    int aux2 = k;
    int x[n], y[n], min[n];
    while (aux < n) {
        scanf("%d", &x[aux]);
        aux++;
    }
    aux = 0;
    while (aux < n) {
        y[aux] = x[aux];
        aux++;
    }
    aux = 0;
    while (aux < n) {
        min[aux] = x[0];
        aux++;
    }
    aux = 0;
    while (aux < n) {
        aux3 = aux;
        while (aux2 > 0 && aux3 >= 0) {
            y[aux3] = y[aux3] - aux2;
            aux3--;
            aux2--;
        }
        aux2 = k;
        aux++;
        int i = 0, j = 0;
        while (i < n) {
            while (j < n) {
                if (y[aux] < min[aux]) {
                    min[aux] = y[aux];
                }
                j++;
            }
            i++;
            j = 0;
        }

    }
    aux = 0;
    while (aux < n) {
        if (max < min[aux]) {
            max = min[aux];
        }
        aux++;
    }
    printf("%d", max + 1);
    return 0;
}