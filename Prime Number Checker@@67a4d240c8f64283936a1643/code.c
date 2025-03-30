#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime if the number is less than or equal to 1
    }

    // Check for factors from 2 to the square root of num
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime if divisible
