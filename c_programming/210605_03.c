#include <stdio.h>

/*This program displays any *
arguments that were passed to it.*/

int main(int argc, char **argv){

    int i;
    for (i = 0; i < argc; i++ ){
        // prits args at index i
        printf("Hello World! argc=%d arg %d is %s\n", argc, i, argv[i]);
    }
    return 0;
}



