#include <stdio.h>

int main() {
    // print a table of celsius converted to fahrenheit from c = 0 to c = 300
    int lower, upper, step;
    float fahrenheit, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    printf(" C      F  \n");
    printf("-----------\n");

    while (celsius <= upper) {
        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        printf("%4.0f %6.1f\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}