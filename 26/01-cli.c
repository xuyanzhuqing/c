#include <stdio.h>
#include "../utils.h"

// 命令行
int main (int argc, char *argv[]) {
  printf("%s\n", argv[0]);
  if (argc == 2) {
    printf("what you passed is %s ", argv[1]);
  } else if (argc > 2) {
    printf("to many args your passed");
  } else {
    printf("please pass args here");
  }
  return 0;
}
