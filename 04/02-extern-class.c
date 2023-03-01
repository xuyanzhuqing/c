#include <stdio.h>

int count;

extern void print_count(); // 引用方法

// cc ./02-extern-class.c ./02-extern-class1.c

// extern 类
int main () {
  count = 5;
  print_count();
  return 0;
}