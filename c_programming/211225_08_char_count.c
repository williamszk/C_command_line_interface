#include <stdio.h>

int main() {
    long numChar;

    numChar = 0;
    while (getchar() != EOF) {
        ++numChar;
        printf("%ld\n", numChar);
    }
    printf("Identified EOF, end of the program. Bye :)\n");
}