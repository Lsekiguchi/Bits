#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int num, loop;
    scanf("%i", &num);
    unsigned int tempos[num];
    loop = 0;
    while (loop < num) {
        scanf("%i", &tempos[loop]);
        loop++;
    }
    loop = 0;
    while (loop < num) {
        if (tempos[loop] <= 5) {
            printf("MIT time\n");
        }
        else if (tempos[loop] <= 25) {
            printf("MIT^2 time\n");
        }
        else if (tempos[loop] <= 125) {
            printf("MIT^3 time\n");
        }
        else if (tempos[loop] <= 625) {
            printf("MIT^4 time\n");
        }
        else if (tempos[loop] <= 3125) {
            printf("MIT^5 time\n");
        } else {
            printf("MIT^6 time\n");
        }
        loop++;
    }
    system("pause");
    return 0;
}
