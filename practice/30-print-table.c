#include <stdio.h>
#include <string.h>

typedef struct Person {
  char name[100];
  int age;
} Person;

int main () {
  Person p1;
  p1.age = 100;
  strcpy(p1.name, "ann");

  Person students[2] = {p1};

  Person p2;
  p2.age = 102;
  strcpy(p2.name, "cungen");

  students[1] = p2;


  int len = sizeof(students) / sizeof(Person);
  printf("%s\t%s", "name", "age");
  printf("\n--------------------\n");
  for (int i = 0; i < len; i++) {
    printf("%s\t%d \n", students[i].name, students[i].age);
  }
  printf("--------------------\n");

  return 0;
}
