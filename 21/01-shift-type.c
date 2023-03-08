#include <stdio.h>
#include "../utils.h"

int main () {
  char c = 'a'; // 97
  int i = 100;

  // int sum = i + c; // 197 隐式转换
  int sum = i + (int )c; // 197 强制转换

  printf("%d", sum);

  return 0;
}
