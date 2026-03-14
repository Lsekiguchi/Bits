#include <stdio.h>
#include <stdlib.h>

int teste (int input) {
    unsigned int m, c, d, u;
    m = input/1000;
    c = (input%1000)/100;
    d = (input%100)/10;
    u = input%10;
    if (m != c && m != d && m != u && c != d && c!= u && d != u) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    unsigned int y, ver;
    scanf("%i", &y);
    ver = 0;
    y++;
    ver = teste(y);
        if (ver == 1) {
        } else {
    while (ver != 1) {
    ver = teste(y);
    y++;
    }
    y--;
        }
    printf("%i", y);
    system("pause");
    return 0;
}
