#include <stdio.h>
#include "../utils.h"

#undef MAX
#define MAX(x,y) ((x) > (y) ? (x) : (y)) // 且必须紧跟在宏名称的后边。宏名称和左圆括号之间不允许有空格。

// \换行符
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")

// 直接判断参数有无定义
#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main () {
  printf("%d", MAX(1,2));

  message_for(Carole, Debra);

  printf("Here is the message: %s\n", MESSAGE);
  return 0;
}
