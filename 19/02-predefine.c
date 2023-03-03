#include <stdio.h>
#include "../utils.h"

// 预指令

int main () {
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ ); // 当编译器以 ANSI 标准编译时，则定义为 1

  return 0;
}
