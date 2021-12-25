#include <stdio.h>


int main() {
    float fahr, celcius; 
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celcius = lower;
    printf("Celcius\tFahrenheit\n");
    while (celcius <= upper) {
        fahr = celcius*(9.0/5.0) + 23.0;
        printf("%7.1f °C\t%10.1f °F\n", celcius, fahr);
        celcius += step;
    }
}