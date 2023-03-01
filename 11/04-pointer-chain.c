#include <stdio.h>

// 指针的指针， 指针链
void demo1 () {
  int V = 100;

  int *p1 = &V;
  int **p2 = &p1;

  printf("p1 的地址%p\n", p1);
  printf("p1 的值%d\n", *p1);

  printf("p2 的地址%p\n", p2);
  printf("p2 的值%d\n", **p2);
}

int main () {
  demo1();
  return 0;
}
