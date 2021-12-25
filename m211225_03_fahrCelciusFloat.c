#include <stdio.h>

// print fahrenheit-celcius table 
// for fahr = 0, 20, ..., 300

int main() {
    float fahr, celcius; 
    int lower, upper, step;

    lower = 0; // the lower limit of temperature table
    upper = 300; // upper limit 
    step = 20; // step size

    fahr = lower;
    printf("Fahrenheit\tCelcius\n");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 23.0);
        // print at least 6 characters wide
        // and %6.1f, print with at least one decimal point after the comma
        // printf("%6.0f\t%6.1f\n", fahr, celcius);
        printf("%10.1f\t%7.1f\n", fahr, celcius);
        // %.2f = print two decimal points after the comma
        // %o = octal
        // %x = for hexadecimal
        // 
        fahr += step;
    }

}
