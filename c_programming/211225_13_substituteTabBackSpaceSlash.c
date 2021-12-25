// Write a program to copy its input to its output, replacing each
// tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
// and backspaces visible in an unambiguous way.

#include <stdio.h>

int main() {

    int charac;

    while ((charac = getchar()) != EOF) {
        if (charac == '\t')
            printf("\\t");
        else if (charac == '\b')
            printf("\\b");
        else if (charac == '\\')
            printf("\\\\");
        else
            printf("%c",charac);
    }
}












