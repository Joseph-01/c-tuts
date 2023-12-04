#include <stdio.h>

int main()
{
    float f;
    int size_char = sizeof(char);
    int size_of_int = sizeof(int);
    int size_long_int = sizeof(long int);
    printf("Size of a char %d\n", size_char);
    printf("Size of a int %d\n", size_of_int);
    printf("Size of a long int %d\n", size_long_int);
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
    return 0;
}