#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "header.h"



int _islower(int c)
{
  if(islower(c)){
    printf("%d is lowercase\n", c);
  } else {
    printf("%d is uppercase\n", c);
  }

  return (0);
}

int main()
{
  _islower('a');
  return (0);
}
