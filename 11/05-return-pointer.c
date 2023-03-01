#include <stdio.h>

int * demo1 () {
  static int res[10]; // C 语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量。static 变量仅仅初始化一次

  for (int i = 0; i < 10; i++) {
    res[i] = i;
    printf("random %d \n", res[i]);
  }

  return res;
}

int main () {
  int *p;
  p = demo1();

  for (int i = 0; i< 10; i++) {
    printf("print %d\n", *(p + i));
  }

  return 0;
}
