#include <stdio.h>

// print fahrenheit-celcius table 
// for fahr = 0, 20, ..., 300

int main() {
    int fahr, celcius;
    int lower, upper, step;

    lower = 0; // the lower limit of temperature table
    upper = 300; // upper limit 
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr - 23) / 9;
        // printf("%d\t%d\n", fahr, celcius);
        // we can include %6d the number of digits to show, formating
        // print at least 6 characters wide
        printf("%6d\t%6d\n", fahr, celcius);
        fahr += step;
    }

}