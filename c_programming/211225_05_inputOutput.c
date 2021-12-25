#include <stdio.h>
// copy input to output 1st verion
int main() {

    printf("This program waits for input from the user's keyboard\n");
    printf("then repeats what was being typed\n\n");
    printf("> ");

    int charac;
    charac = getchar();
    while (charac != EOF) { // EOF = end of file
        putchar(charac);
        charac = getchar();
    }

}