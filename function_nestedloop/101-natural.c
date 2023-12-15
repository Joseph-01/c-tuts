#include <stdio.h>

int main(void)
{
    // Initialize the sum variable
    int sum = 0;

    // Loop through numbers below 1024
    for (int i = 0; i < 1024; i++)
    {
        // Check if the number is a multiple of 3 or 5
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            // Add the multiple to the sum
            sum += i;
        }
    }

    // Print the result
    printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}
