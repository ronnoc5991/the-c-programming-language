#include <stdio.h>

int main() {
    // print a table of fahrenheit converted to celsius from f = 0 to f = 300
    int lower, upper, step; 
    float fahrenheit, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    fahrenheit = lower;

    printf(" F      C  \n");
    printf("-----------\n");

    while (fahrenheit <= upper) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%4.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    return 0;
}