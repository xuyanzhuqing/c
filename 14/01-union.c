#include <stdio.h>

// 共同体
// 类似结构体，但是仅能保存一个字段的值，占用的字节数以最大的为准

union Var {
  char c; // 1
  int j; // 4
  int arr[10]; // 4 * 10
};


int main () {
  union Var var;
  printf("sizeof %lu \n", sizeof(var));

  var.c = 'a';
  var.j = 10;
  var.arr[0] = 1;

  printf("%c \n", var.c); // wrong value
  printf("%d \n", var.j); // wrong value
  printf("%d \n", var.arr[0]); // 1


  printf("错开时间使用");

  var.c = 'a';
  printf("%c \n", var.c); // right value

  var.j = 10;
  printf("%d \n", var.j); // right value

  var.arr[0] = 1;
  printf("%d \n", var.arr[0]); // 1

  return 0;
}
