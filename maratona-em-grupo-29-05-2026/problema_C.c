#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int h = 0, w = 0, k = 0, i = 0, j = 0, aux = 0, aux2 = 3;
    scanf("%d %d %d %d %d", &h, &w, &k, &i, &j);
    char matriz[h][w];
    matriz[0][0] = 'K';
    matriz[0][1] = 'I';
    matriz[0][2] = 'T';
        while (aux < h) {
            while (aux2 < w) {
                matriz[aux][aux2] = 'K';
                k--;
                if (k == 0) {
                    break;
                }
                aux2++;
            }
            if (k == 0) {
                break;
            }
            aux2 = 0;
            aux++;
        }
        while (aux < h) {
            while (aux2 < w) {
                matriz[aux][aux2] = 'T';
                j--;
                if (j == 0) {
                    break;
                }
                aux2++;
            }
            if (j == 0) {
                break;
            }
            aux2 = 0;
            aux++;
        }
        while (aux < h) {
            while (aux2 < w) {
                matriz[aux][aux2] = 'I';
                i--;
                if (i == 0) {
                    break;
                }
                aux2++;
            }
            aux2 = 0;
            aux++;
        }
    aux = 0;
    aux2 = 0;
    while (aux < h) {
        while (aux2 < w) {
            printf("%c", matriz[aux][aux2]);
            aux2++;
        }
        printf("\n");
        aux2 = 0;
        aux++;;
    }

    return 0;
}