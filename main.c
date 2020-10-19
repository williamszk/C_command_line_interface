
#include <stdio.h>
#include <stdlib.h>

int main(){

    char command;
    int state = 1;

    printf("+-----------------------------------------+\n| This is a Command Line Interface.\n| This is a project to learn C programming\n|\n| William Suzuki\n| oct - 2020\n+-----------------------------------------+\n\n\n");

    while (state == 1){
        printf(">");
        scanf("%c", &command);
        printf("%c",command);
    }


    return 0;
}