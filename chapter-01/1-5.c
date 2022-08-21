#include <stdio.h>

int main() {
    int fahrenheit;
    printf(" F      C  \n");
    printf("-----------\n");

    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20) {
        printf("%4d %6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
    }

    return 0;
}