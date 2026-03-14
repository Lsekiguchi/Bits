#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%i", &num);
    unsigned int cost[num], loop;
    loop = 0;
    while (loop < num) {
        scanf("%i", &cost[loop]);
        loop++;
    }



    system("pause");
    return 0;
}
