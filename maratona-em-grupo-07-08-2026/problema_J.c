#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0, aux = 0, contador = 0;
    scanf("%d", &num);
    char seq[num + 1];
    scanf("%s", seq);
    char pos = 'C';
    while (aux < num) {
        if ((pos == 'D' && seq[aux] == 'E') || (pos == 'E' && seq[aux] == 'D')) {
            if(aux + 1 == num) {
                printf("%d", contador);
                return 0;
            }
            contador++;
            pos = seq[aux + 1];
            aux++;
            aux++;
        } else {
            contador++;
            pos = seq[aux];
            aux++;
        }
    }
    printf("%d", contador);

    return 0;
}