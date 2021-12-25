#include <stdio.h>

int main() {
	double numChar;

	for (numChar = 0; getchar() != EOF; ++numChar)
		;
	printf("%.0f\n", numChar);
}