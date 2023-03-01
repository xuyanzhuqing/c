#include <stdio.h>

// 判断
int main () {
  int a = 10;

  if (a % 2 == 0) {
    printf("a 是一个偶数 \n");
  } else {
    printf("a 是一个奇数\n");
  }

  (a % 2 == 0) ? printf("a 是一个偶数\n") : printf("a 是一个奇数\n");


  const char age = 18;

  switch (age)
  {
  case 18: printf("it's me\n");
    break;
  default:
    printf("oh, what a peat\n");
    break;
  }
  return 0;
}
