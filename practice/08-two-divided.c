#include <stdio.h>
#include <stdlib.h>

int main () {
  int a, b, c, d;

  scanf("%d", &a);
  scanf("%d", &b);

  if (b == 0) {
    printf("there will be occurring a runtime error");
    exit(-1);
  }

  // 商
  c = a / b;

  // 余数
  d = a % b;
  printf("a / b = %d 余 %d \n", c, d);
  return 0;
}
