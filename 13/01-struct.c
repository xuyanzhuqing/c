#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 结构体就是 ts 的 interface

// 定义
struct Book {
  char title[100];
  char author[100];
  float price;
};

struct Rich {
  int money;
  int stock;
  bool women;
  bool house;
};

struct DiaoSi {
  char name[100];
  int age;
  struct Rich *rich; // 屌丝都有一个发财梦
  char *tag[];
} diaosi;

struct DaShen {
  char name[100];
  int age;
  char *tag[];
} daShen = { "cun gen", 18, { "高", "富", "帅" }  };

void print (struct DiaoSi *p ) {
  printf("%s", p -> name);
  printf("%s", p -> tag[0]);
  printf("%s", p -> tag[1]);
  printf("%s", p -> tag[2]);
}

int main () {
  // 初始化屌丝
  strcpy(diaosi.name, "随波逐流");
  diaosi.age = 30;
  diaosi.tag[0] = "矮";
  diaosi.tag[1] = "矬";
  diaosi.tag[2] = "穷";

  printf("%s", diaosi.tag[0]);
  printf("%s", daShen.tag[0]);

  // 用指针获取结构体的成员值
   struct DiaoSi *p = &diaosi;
   printf("%s", p->tag[0]);

  print(&diaosi);
  return 0;
}
