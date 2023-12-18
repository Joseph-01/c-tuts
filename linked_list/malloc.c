#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *age;
    age = (int *)malloc(sizeof(int) * 1);
    if (age == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }
    printf("How old are you? ");
    scanf("%d", age);
    printf("You are %d years old.\n", *age);
    return (0);
}