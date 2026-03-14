#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%i", &num);
    unsigned int height[num];
    unsigned int loop = 0;
    unsigned int small;
    while (loop < num) {
        scanf("%i", &height[loop]);
        loop++;
    }
    loop = 0;
    small = height[0];
    while (loop < num) {
        if (small > height[loop]) {
            small = height[loop];
        }
        loop++;
    }
    unsigned int meters = 0;
    loop = 0;
    while (loop < num) {
        meters = meters + height[loop] - small;
        loop++;
    }
    printf("%i", meters);
    system("pause");
    return 0;
}
