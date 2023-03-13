#include <stdio.h>

int main () {
  int a = 100;
  int b = 101;

  int c = a;
  a = b;
  b = c;

  printf("a = %d, b = %d", a, b);
  return 0;
}
