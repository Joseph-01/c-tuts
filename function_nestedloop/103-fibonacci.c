#include <stdio.h>

int main() {
    // Initialize variables
    unsigned long long fib1 = 1, fib2 = 2, sum = 0;

    // Print the first two terms
    printf("%llu, %llu, ", fib1, fib2);

    // Loop to generate Fibonacci sequence and find the sum of even terms
    while (fib2 <= 4000000) {
        // Check if the current term is even
        if (fib2 % 2 == 0) {
            // If even, add it to the sum
            sum += fib2;
        }

        // Calculate the next term in the Fibonacci sequence
        unsigned long long nextTerm = fib1 + fib2;

        // Print the current term
        printf("%llu, ", nextTerm);

        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = nextTerm;
    }

    // Print the sum of even-valued terms
    printf("\nSum of even-valued terms: %llu\n", sum);

    return 0;
}
