#include <stdio.h>

int main () {
  char words[100];

  printf("please enter a char: ");
  gets(words); // 方法过时了

  printf("your entered :");
  puts(words);

  return 0;
}
