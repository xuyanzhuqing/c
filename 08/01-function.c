#include <stdio.h>

extern int max(int num1, int num2);

int main () {
  int a = 10;
  int b = 12;

  printf("the max number is %d \n", max(a, b));
  return 0;
}
