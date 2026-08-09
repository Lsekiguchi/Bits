#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int aux = 0, aux2 = 0, contador = 0;
    char str[101];
    char straux[101];
    while (1) {
        aux = 0;
        aux2 = 0;
        gets(str);
        if (str[0] == 'p' && str[5] == '(') {
            aux = 6;
            while (str[aux] != ')') {
                straux[aux2] = str[aux];
                aux++;
                aux2++;
            }
            straux[aux2] = '\0';
            printf("APRESENTE %s", straux);
            contador++;
            break;
        } else {
            if (str[0] == 'i' && str[2] == ' ') {
                aux = 3;
                while (str[aux] != ':') {
                    straux[aux2] = str[aux];
                    aux++;
                    aux2++;
                }
                straux[aux2] = '\0';
                contador++;
                printf("SE %s ENTAO ", straux);
            } else {
                if (str[0] == 'w' && str[5] == ' ') {
                    aux = 6;
                    while (str[aux] != ':') {
                        straux[aux2] = str[aux];
                        aux++;
                        aux2++;
                    }
                    contador++;
                    printf("ENQUANTO %s ", straux);
                } else {
                    while (str[aux] != ' ' && str[aux + 1] != '=') {
                        straux[aux] = str[aux];
                        aux++;
                    }
                    contador++;
                    printf("LEIA %s", straux);
                    break;
                }
            }
        }
    }



    return 0;
}