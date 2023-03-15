#include <stdio.h>

int main () {
  int lower = 'a';
  int upper = 'A';
  int i;
  for (i = 0; i < 26; i++) {
    printf("%c %c \t", lower++, upper++);
  }
  return 0;
}
