//KEVIN SIBY
//Photonics
//25020096
//largest,smallest and average marks
#include <stdio.h>

int findLargest(int a, int b, int c);
int findSmallest(int a, int b, int c);
float calculateAverage(int a, int b, int c);

int main() {
    int s1, s2, s3;

    printf("Enter marks of three subjects (out of 100): \n");
    scanf("%d %d %d", &s1, &s2, &s3);

    // a) Finding Largest
    int largest = findLargest(s1, s2, s3);
    printf("\nLargest Mark: %d", largest);

    // b) Finding Smallest
    int smallest = findSmallest(s1, s2, s3);
    printf("\nSmallest Mark: %d", smallest);

    // c) Calculating Average and assigning V
    float avg = calculateAverage(s1, s2, s3);
    int V = (avg >= 50) ? 1 : 0;

    printf("\nAverage Mark: %.2f", avg);
    printf("\nValue of V: %d\n", V);

    return 0;
}

// a) Function to find largest using nested if
int findLargest(int a, int b, int c) {
    if (a >= b) {
        if (a >= c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b >= c) {
            return b;
        } else {
            return c;
        }
    }
}

// b) Function to find smallest using if-else if
int findSmallest(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}

// c) Function to calculate average
float calculateAverage(int a, int b, int c) {
    return (a + b + c) / 3.0;
}
