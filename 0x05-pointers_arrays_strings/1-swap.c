#include "main.h"

void swap_int(int *a, int *p)
{
    int i = *p;
    int o = *a;

    *a = i;
    *p = o;
}