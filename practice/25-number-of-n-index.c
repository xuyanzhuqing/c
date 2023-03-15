#include <stdio.h>

int indexOfNumber(int input, int index) {
  if (index == 0) return 1;

  return input * indexOfNumber(input, index - 1);
  // 5 * 5 * 5
  // 2   1   0
}

int main () {
  printf("%d", indexOfNumber(5, 3));
  return 0;
}
