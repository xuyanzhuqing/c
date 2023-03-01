#include <stdio.h>

// 若当前指针处变量定义为 int， 则 ++ 表示内存地址+4， --表示 -4
void demo1 () {
  int a = 100;

  int *p = &a;

  printf("%p \t", p); // 0x16d0a6b78
  p++;
  printf("%p \t", p); // 0x16d0a6b7c
  p--;
  printf("%p \t", p); // 0x16d0a6b78
  printf("\n");
}

void demo2 () {
  int ages[] = { 18, 17, 19, 20 };

  int *p = ages;
  int len = sizeof(ages) / sizeof(ages[0]);

  int *last = p + len - 1;

  printf("ages: %p \n", p);
  printf("last: %p \n", last);
  printf("last value: %d \n", *last);
}

// 利用指针遍历数组
void demo3 () {
  int ages[] = { 18, 17, 19, 20 };

  int len = sizeof(ages) / sizeof(ages[0]);

  int *start = ages;
  for (int *i = start; i < start + len;) {
    printf("current value i %d \n", *i);
    i++;
  }
}

// 也可以用来进行比较 *p1 < *p2

// 指针的算术运算
int main () {
  demo1();
  demo2();
  demo3();

  return 0;
}