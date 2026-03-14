#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int num, loop;
    scanf("%i", &num);
    unsigned int tempos[num];
    loop = 0;
    while (loop < num) {
        scanf("%i", tempos[loop]);
        loop++;
    }


    return 0;
}
