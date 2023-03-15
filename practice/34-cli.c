#include <stdio.h>

int main () {
  char c;
  for (;;) {
    scanf("%c", &c);
    printf("%c", c);

    if (c == '\0') {
      break;
    }
  }
  return 0;
}
