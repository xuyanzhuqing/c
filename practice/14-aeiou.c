#include <stdio.h>
#include <stdbool.h>

int main () {
  char c;

  scanf("%c", &c);

  bool flag = false;
  switch (c)
  {
  case 'a':
    flag = true;
    break;
  case 'e':
    flag = true;
    break;
  case 'i':
    flag = true;
    break;
  case 'o':
    flag = true;
    break;
  case 'u':
    flag = true;
    break;
  default:
    break;
  }

    switch (c)
  {
  case 'A':
    flag = true;
    break;
  case 'E':
    flag = true;
    break;
  case 'I':
    flag = true;
    break;
  case 'O':
    flag = true;
    break;
  case 'U':
    flag = true;
    break;
  default:
    break;
  }

  printf("%c %s元音字母", c, flag ? "是" : "不是");

  return 0;
}
