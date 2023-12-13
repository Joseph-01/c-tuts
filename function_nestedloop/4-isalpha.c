#include "header.h"
#include <ctype.h>

int _isalpha(int c)
{
  if(isalpha(c)) {
    return (1);
  } else {
    return (0);
  }
  
  return (0);
}