#include "header.h"

void times_table()
{
  int i, j;
  for(i = 0; i <= 9; i++) {
    for(j = 0; j <= 9; j++) {
      int result_one = j * i;
      printf(" %d, ", result_one);
    }
    printf("\n");
  }
}
