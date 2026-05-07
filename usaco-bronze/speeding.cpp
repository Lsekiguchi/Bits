#include <stdio.h>

int main() {
    int n = 0, m = 0, aux = 0, aux2 = 0, aux3 = 0, out = 0, auxestr = 0, auxbes = 0;
    scanf("%d %d", &n, &m);
    int estrada[n][2], bessie[m][2];
    while (aux < n) {
        scanf("%d %d", &estrada[aux][0], &estrada[aux][1]);
        aux++;
    }
    aux = 0;
    while (aux < m) {
        scanf("%d %d", &bessie[aux][0], &bessie[aux][1]);
        aux++;
    }
    aux = 0;
    auxestr = estrada[0][1];
    auxbes = bessie[0][1];
    while (aux < 100) {
        if (aux > estrada[aux2][0]) {
            aux2++;
            auxestr = estrada[aux2][1];
        }
        if (aux > bessie[aux3][0]) {
            aux3++;
            auxbes = bessie[aux3][1];
        }
        if (auxbes - auxestr > out) {
            out = auxbes - auxestr;
        }
        aux++;
    }
    printf("%d\n", out);
    return 0;
}
