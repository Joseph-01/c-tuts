#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    int i = 1;
    while (i < 98)
    {
        if (a < 0)
        {
            a = a * -i;
            printf("%d, ", a);
        }
        printf("%d, ", a);
        int result = a + b;
        a = b;
        b = result;
        i++;
    }
    return (0);
}