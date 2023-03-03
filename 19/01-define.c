#include <stdio.h>
#include "../utils.h" // 引入自己写的库
#include "env.h"

#ifndef PAI // 未定义 --> true
  #define PAI 3.0
#endif

#ifdef PAI
  #undef PAI  // 取消已定义的 PAI
  #define PAI 3.14  // 设置 PAI
#endif

int main () {
  println("%d", 100);
  printf("%.7f", PAI);
  return 0;
}
