#include <stdio.h>

int fibonacci (int num) {
  if (num == 0 || num == 1) return num;

  return fibonacci(num - 1) + fibonacci(num - 2);
}

int main () {
  for (int i = 0; i < 10; i++) {
    printf("%d \t", fibonacci(i));
  }
  return 0;
}
