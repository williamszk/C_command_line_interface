
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 1000

int main(){

    char command[MAX_LIMIT];
    char delimiter[] = " ";
    int state = 1;

    printf("+-----------------------------------------+\n");
    printf("| This is a Command Line Interface.       |\n");
    printf("| This is a project to learn C programming|\n");
    printf("|                                         |\n");
    printf("| William Suzuki                          |\n");
    printf("| Dec - 2021                              |\n");
    printf("+-----------------------------------------+\n\n");

    while (state == 1){
        printf("> ");

        fgets(command, MAX_LIMIT, stdin);
        
        printf("%s", command);

    }

    return 0;
}




