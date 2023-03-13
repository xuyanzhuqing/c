#include <stdio.h>

int main () {
  char c = 'a';

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    printf("是字母");
  } else {
    printf("不是字母");
  }
  return 0;
}
