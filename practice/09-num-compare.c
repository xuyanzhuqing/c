#include <stdio.h>

int main () {
  int a = 10, b = 9, c = 8;

  if (a > b && a > c) {
    printf("a 最大");
  } else if (b > a && b > c) {
    printf("b 最大");
  } else if (c > a && c > b){
    printf("c 最大");
  } else {
    printf("存在两两相等或三个数相等");
  }

  return 0;
}
