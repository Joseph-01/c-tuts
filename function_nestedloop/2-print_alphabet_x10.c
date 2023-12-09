#include <stdio.h>
#include <unistd.h>
#include "header.h"

int _putchar(char c) {
  return(write(1, &c, 1));
}

void print_alphabet_x10()
{
  int i = 0;
  while(i < 10) {
    for(char c = 'a'; c <= 'z'; c++){
      _putchar(c);
    }
    _putchar('\n');
    i++;
  }
}


int main()
{

  print_alphabet_x10();
  return (0);
}

