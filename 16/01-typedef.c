#include <stdio.h>
#include <string.h>

// typedef 相当于 ts 的 type, 简化

typedef struct Persons {
  char name[100];
} Person;

typedef unsigned char MYBYTE;

int main () {
  Person p;
  strcpy(p.name, "cungen");

  printf("name is %s \n", p.name);

  MYBYTE a = 'a';

  printf("a is %c \n", a);
  return 0;
}
