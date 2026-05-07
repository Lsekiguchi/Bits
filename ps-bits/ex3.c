#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int num, loop, contagem, loop2;
    scanf("%i", &num);
    unsigned int tempos[num];
    loop = 0;
    while (loop < num) {
        scanf("%i", &tempos[loop]);
        loop++;
    }
    loop = 0;
    loop2 = 0;
    contagem = 1;
    while (loop < num) {
        while (tempos[loop] > 5) {
                if (tempos[loop]%5 != 0 && (tempos[loop]/5 + 1)%5 == 0) {
                    tempos[loop] = tempos[loop]/5 + 1;
                } else {
                    tempos[loop] = tempos[loop]/5;
                }
                contagem++;
            loop2++;
            }
        tempos[loop] = contagem;
        contagem = 1;
        loop2 = 0;
        loop++;
    }
    loop = 0;
    while (loop < num) {
        if (tempos[loop] == 1) {
            printf("MIT time\n");
        } else {
            printf("MIT^%i time\n", tempos[loop]);
        }
        loop++;
    }
    system("pause");
    return 0;
}
