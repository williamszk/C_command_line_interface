#include <stdio.h>

int main() {

    int charac;

    // while ((charac = getchar()) != '0'){
    while (getchar() != EOF) {
        putchar(charac);
    }
    printf("%d\n", EOF);
    // EOF is -1
}