#include <stdio.h>
#include "../utils.h"

int factorial (int num) {
  if (num == 1) {
    return 1;
  };
  return num * factorial(num - 1);
}

int fibonaci (n) {
  if (n == 1 || n == 0) return n;

  return fibonaci(n - 1) + fibonaci(n - 2);
}

int main () {
  printf("the result is %d \n", factorial(4));

  for (int i = 0; i < 10; i++)
  {
    printf("%d \t", fibonaci(i));
  }

  return 0;
}
