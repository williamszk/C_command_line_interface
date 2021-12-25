#include <stdio.h>

int main() {
    int charac;
    // in every assignment there is a return which is the value
    // of the left most object
    while ((charac = getchar()) != EOF) {
        // printf("%d ", getchar() != EOF);
        putchar(charac);
    }

}