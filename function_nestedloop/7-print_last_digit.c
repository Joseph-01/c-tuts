#include "header.h"
#include <stdio.h>

int print_last_digit(int c)
{
  int i;
  i = c % 10;
  printf("%d\n",i);
  return (0);
}