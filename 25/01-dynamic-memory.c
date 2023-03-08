#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 动态内存
void demo1 () {
  char name[10];
  char *description;

  strcpy(name, "cungen");
  description = (char *) malloc(200 * sizeof(char)); // 动态分配内存
  if (description == NULL) {
    fprintf(stderr, "Error unable to allocated required memory");
    exit(-1);
  }

  strcpy(description, "he is a handsome man, with to many money, and kindness");

  printf("the name is %s \n", name);
  printf("the description is %s \n", description);
}

int main () {
  demo1();
  return 0;
}
