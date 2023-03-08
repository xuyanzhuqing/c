#include <stdio.h>
#include "../utils.h"

int main () {
  // 隐式转换的优先级
  /**
   * long double
   * double
   * float
   * unsigned long long
   * long long
   * unsigned long
   * long
   * unsigned int
   * int
   * char
  */

  // 当遇到较小的类型与较大类型计算时，会将小的类型转换到大的类型
  int  a = 100;
  float b = 1;

  printf("%f", a + b);

  return 0;
}
