#include <stdio.h>

enum WEEKEND {
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN = 10 // 可以自定义枚举值
};

int main () {

  enum WEEKEND day;


  // 遍历连续枚举
  for (int i = MON; i <= SUN; i++) {
    printf("%d", i);
  }

  // 数字转化为 enum
  int dayCount = 0;
  day = (enum WEEKEND) dayCount; // 强制类型转换

  printf("%d\n", day);

  return 0;
}
