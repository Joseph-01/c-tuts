#include <unistd.h>
#include "header.h"	

int main()
{
  print_alphabet();
  return (0);
}

int _putchar(char c)
{
 return(write(1, &c, 1));
}

void print_alphabet()
{
  for(char c = 'a'; c <= 'z'; c++) {
    _putchar(c);
  }

  _putchar('\n');
}
