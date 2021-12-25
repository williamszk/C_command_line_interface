#include <stdio.h>

// Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

int main() {

    int charac;
    int prevCharac = 0;

    while ((charac = getchar()) != EOF) {
        if (prevCharac == ' ' && charac == ' ') {
            ;
        } else {
            putchar(charac);
        }
        prevCharac = charac;
    }
}