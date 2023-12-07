#include <stdio.h>

int main()
{
  
  for(char ch = 'a'; ch <= 'z'; ch++){
    if(ch == 'q' || ch == 'e') {
      ch++;
    }
    putchar(ch);
  }



  putchar('\n');
  return (0);
}
