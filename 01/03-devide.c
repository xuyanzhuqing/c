#include <stdio.h>

int divideRound (int a, int b) {
  float f = (float) a / b;
  int floor = (int) f;

  if (f - floor > 0.5) {
    return floor + 1;
  } else {
    return floor;
  }
}

int divideCeil (int a, int b) {
  float f = (float) a / b;
  int floor = (int) f;

  if (f - floor > 0) {
    return floor + 1;
  } else {
    return floor;
  }
}

int main () {
  // 打印百分号
  printf("hello world %% ! \n");

  printf("1.39 %d \n", (int) 1.39);
  printf("1.99 %d \n", (int) 1.99);
  printf("-1.39 %d \n", (int) -1.39);
  printf("-1.99 %d \n", (int) -1.99);

  printf("4 %d \n", divideRound(17, 4));
  printf("5 %d \n", divideRound(19, 4));
  printf("4 %d \n", divideRound(16, 4));

  printf("5 %d \n", divideCeil(17, 4));
  printf("4 %d \n", divideCeil(16, 4));

  return 0;
}