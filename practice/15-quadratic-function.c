#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 一元二次方程 aX^2 + bx + c = 0
int main () {
  int a,b,c;
  float x1, x2;

  scanf("%d %d %d", &a, &b, &c);

  printf("您输入的是公示： %dX^2 + %dx + %d = 0 \n", a, b, c);

  // 判断是否有实根
  int delta = b * b - 4 * a * c;

  if (delta > 0) {
    printf("有 2 个实根");
  } else if (delta == 0) {
    printf("有 1 个实根");
  } else {
    printf("无实根");
    exit(-1);
  }

  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  printf("x1 = %0.2f; x2 = %0.2f;\n", x1, x2);
  return 0;
}
