#include <stdio.h>

// 最大公约数
int main () {
  int a, b, divisor;

  scanf("%d %d", &a, &b);

  for (int i = 1; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      divisor = i;
    }
  }

  printf("%d %d 的最大公约数是: %d\n", a, b, divisor);

  return 0;
}
