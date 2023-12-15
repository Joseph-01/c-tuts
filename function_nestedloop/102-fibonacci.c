#include <stdio.h>

int main()
{
    long long unsigned int a = 0;
    long long unsigned int b = 1;
    int n = 50;
    for(int i = 1; i < n; i++) {
        printf("%llu, ", a);
        long long unsigned int result = a + b;
        a = b;
        b = result;
    }
    return 0;
}
