#include <stdio.h>

void demo1 () {
  int a; // 申请 4 个字节的内存空间

  a = 100; // 赋值

  int *p; // 定义一个int指针类型变量,需要声明为对应类型（int a）
  printf("a 的内存地址是 %p， 之前\n", p);
  p = &a; // 将 a 的内存地址赋给指针变量
  printf("a 的内存地址是 %p， 之后\n", p);

  printf("指针类型对应的值 %d \n", *p);
}

// 定义一个int指针类型变量,需要声明为对应类型（int a）
void demo2 () {
  char a[] = "hello world!";
  char *p = &a;
  printf("%p \n", p);
}

// 空指针
void demo3 () {
  int *p = NULL;

  if (!p) {
    printf("fuck u, null pointer \n");
  }
  printf("%p is null", p); // 0x0
}

// 指针
int main () {
  demo1();
  demo2();
  demo3();
  return 0;
}
