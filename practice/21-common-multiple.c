#include <stdio.h>

// 最小公倍数
int main () {
  int a, b, c, i;

  scanf("%d %d", &a, &b);

  i = a > b ? a : b;
  // 从较大的数开始找
  for (;; i++) {
    if (i % a == 0 && i % b == 0) {
      printf("%d %d 的最小公倍数是 %d \n", a, b, i);
      break;
    }
  }

  return 0;
}
