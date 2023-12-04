#include <stdio.h>
#include <string.h>

int main() {
    char array_name[8][16];

    // Assigning a string to an element in the array
    strcpy(array_name[0], "Hello, World!");

    // Printing the string stored in the array
    printf("%s\n", array_name[0]);

    return 0;
}
