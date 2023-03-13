#include <stdio.h>

int main () {
  int a;

  printf("请输入一个整数");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("输入的是偶数 \n");
  } else {
    printf("输入的是基数 \n");
  }

  return 0;
}
