#include "main.h"
#include "_putchar.c"

void print_diagonal(int n)
{
  for(int i = 0; i < n; i++){
    _putchar('\\');
  }
  _putchar('\n');
}