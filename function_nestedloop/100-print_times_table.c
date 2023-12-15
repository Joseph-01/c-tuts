#include "header.h"

void print_times_table(int n) {
  if(n > 15 || n < 0) {
    printf("\n");
  } else {
    for(int i = 0; i <= n; i++) {
      for(int j = 0; j <= n; j++) {
        int result = j * i;
        printf("%d, ", result);
      }
      printf("\n");
    }
  }


  
}