#include <stdio.h>

int a = 100; // 全局变量

int counter () {
  return a;
}

int sum (int a, int b) {
  return a + b;
}


int main () {

  printf("globe a is %d \n", counter());
  int a = 101;
  printf("globe a is %d \n", counter());

  printf("local a is %d \n", a);

  printf("local a is more important than other %d \n", sum(a, 99));
  return 0;
}
