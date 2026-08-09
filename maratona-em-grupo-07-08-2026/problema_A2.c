#include <stdio.h>

int main() {
    int predios = 0, numconst = 0;
    scanf("%d %d", &predios, &numconst);
    int altura[predios];
    int aux = 0;
    while (aux < predios) {
        scanf("%d", &altura[aux]);
        aux++;
    }
    int construcoes[2*numconst];
    aux = 0;
    while (aux < 2*numconst) {
        scanf("%d", &construcoes[aux]);
        aux++;
    }
    aux = 0;
    int aux2 = 0;
    while (aux < 2*numconst) {
        aux2 = construcoes[aux] - 1;
        while (aux2 >= 0) {
            altura[aux2] = altura[aux2] + construcoes[aux + 1];
            aux2--;
        }
        aux = aux + 2;
    }
    aux = 1;
    int contador = 0, max = 0;
    aux2 = 0;
    while (aux < predios) {
        while (aux2 >= 0) {
            if (altura[aux2] > max) {
                max = altura[aux2];
                contador++;
            }
            aux2--;
        }
        printf("%d\n", contador);
        contador = 0;
        max = 0;
        aux2 = aux;
        aux++;
    }

    return 0;
}