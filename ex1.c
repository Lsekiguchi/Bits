#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num, resultado;
    scanf("%i", &num);
    num = 2*num;
    unsigned int ab[num], loop;
    loop = 0;
    while (loop < num) {
        scanf("%i", &ab[loop]);
        loop++;
    }
    loop = 0;
    while (loop < num) {
    resultado = ab[loop]%ab[loop + 1];
    printf("%i\n", resultado);
    loop++;
    loop++;
    }
    return 0;
}
