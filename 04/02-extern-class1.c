#include <stdio.h>

extern int count; // 引用变量

void print_count (void) {
  printf("count now is %d \n", count);
}