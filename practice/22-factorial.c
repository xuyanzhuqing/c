#include <stdio.h>

int factorial (int num) {
  if (num <= 1) return 1;

  return num * factorial(num - 1);
}

int stepAddition (int num) {
  if (num <= 0) return 0;
  return num + stepAddition(num - 1);
}

int main () {
  int num = 5;
  printf("%d！等于 %d \n", num, factorial(num));
  printf("%d? 等于 %d \n", num, stepAddition(num));
  return 0;
}
