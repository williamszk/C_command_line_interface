#include <stdio.h>
// Write a program to count blanks, tabs, and newlines.
int main() {

    int charac;

    int numLines = 0;
    int numTabs = 0;
    int numBlankSpace = 0;
    while ((charac = getchar()) != EOF){
        if (charac == '\t')
            ++numTabs;
        else if (charac == '\n')
            ++numLines;
        else if (charac == ' ')
            ++numBlankSpace;
    }

    printf("Number of tabs: %d\n", numTabs);
    printf("Number of lines: %d\n", numLines);
    printf("Number of blank spaces: %d\n", numBlankSpace);
}