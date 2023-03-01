// 定义常量

#include <stdio.h>

// 方法一
#define LENGTH 10
#define WIDTH 6
#define HEIGHT 8

// cc ./02-const.c && ./a.out
int main () {
  int area;

  area = WIDTH * HEIGHT;

  printf("value of area is %d \n", area);

  // 方法二
  const double PAI = 3.1415926;

  printf("value of PAI is %.8f \n", PAI);

  return 0;
}