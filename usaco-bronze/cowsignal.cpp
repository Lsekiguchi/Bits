#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 0, n = 0, k = 0, aux1 = 0, aux2 = 0, aux3 = 1, aux4 = 1;
    scanf("%d %d %d", &m, &n, &k);
    char simbol[m][n + 1];
    while (aux1 < m) {
        scanf("%s", simbol[aux1]);
        aux1++;
    }
    aux1 = 0;
    aux2 = 0;
    printf("\n");
    while (aux1 < m) {
        while (aux4 <= k) {
            while (aux2 < n) {
                while (aux3 <= k) {
                    printf("%c", simbol[aux1][aux2]);
                    aux3++;
                }
                aux3 = 1;
                aux2++;
            }
            printf("\n");
            aux4++;
            aux2 = 0;
        }
        aux4 = 1;
        aux2 = 0;
        aux1++;
    }
    return 0;
}
