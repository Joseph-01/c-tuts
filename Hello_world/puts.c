#include <stdio.h>

int main()
{
    const char *message = "Hello, World!";

    // Using puts to print a string
    if (puts(message) == EOF)
    {
        perror("puts");
        return 1; // Indicates an error
    }

    return 0; // Indicates successful execution
}
