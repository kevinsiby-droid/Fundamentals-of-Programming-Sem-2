//KEVIN SIBY
//Photonics
//25020096
//sinx ,cosx ,SUM
#include <stdio.h>
#include <math.h>

// Function to calculate Sine Series
double calculateSine(double x) {
    double term = x, sum = x;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    return sum;
}

// Function to calculate Cosine Series
double calculateCosine(double x) {
    double term = 1.0, sum = 1.0;
    int i = 1;
    do {
        term = term * (-1 * x * x) / ((2 * i - 1) * (2 * i));
        sum += term;
        i++;
    } while (fabs(term/sum) > 0.000001);
    return sum;
}

// Function to calculate the Sum Series: 1 + (1/2)^2 + (1/3)^3...
double calculateSumSeries() {
    double term, sum = 0;
    int n = 1;
    do {
        term = pow((1.0 / n), n);
        sum += term;
        n++;
    } while (term > 0.000001);
    return sum;
}

int main() {
    double x;

    printf("Enter x in radians: ");
    scanf("%lf", &x);

    // Calling the functions
    printf("\n--- Results ---\n");
    printf("Sine of x:    %.6f\n", calculateSine(x));
    printf("Cosine of x:  %.6f\n", calculateCosine(x));
    printf("Sum Series:   %.8f\n", calculateSumSeries());

    return 0;
}
