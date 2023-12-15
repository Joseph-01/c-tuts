#include "header.h"

void print_to_98(int n) {
  if(n < 98) {
    for(int i = n; i <= 98; i++) {
      printf("%d, ", i);
    }
  }

  if(n > 98) {
    for(int i = n; i >= 98; i--) {
      printf("%d, ", i);
    }
  }
}