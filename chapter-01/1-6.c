#include <stdio.h>

int main() {
    // count blanks, tabs and new lines
    int c, numBlanks, numTabs, numNewLines;
    numBlanks = numTabs = numNewLines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            numBlanks++;
        } else if (c == '\t') {
            numTabs++;
        } else if (c == '\n') {
            numNewLines++;
        }
    }

    printf("Number of blank lines: %d\n", numBlanks);
    printf("Number of tabs: %d\n", numTabs);
    printf("Number of new lines: %d\n", numNewLines);

    return 0;
}