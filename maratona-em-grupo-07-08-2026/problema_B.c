#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a = 0;
    float pi = 3.14159265;
    scanf("%d", &a);
    if (sin(a*pi/180) > cos(a*pi/180)) {
        printf("Saad");
    } else{
        if (cos(a*pi/180) > sin(a*pi/180)) {
            printf("Costa");
        } else {
            printf("Ambos");
        }
    }

    return 0;
}