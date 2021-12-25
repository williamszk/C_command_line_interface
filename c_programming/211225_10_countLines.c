#include <stdio.h>

int main() {

	int charac, numLines;

	numLines = 0;
	while ((charac = getchar()) != EOF)
		if (charac == '\n') 
			++numLines;
	
	printf("%d\n", numLines);
}