#include <stdio.h>

// 能被4，400整除，不能被100整除
int main () {
  int year;

  printf("请输入年份：");
  scanf("%d", &year);

  int flag = 0;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        flag = 1;
      }
    } else {
      flag = 1;
    }
  }

  printf("%d 是 %s 年\n", year, flag ? "闰" : "平" );
  return 0;
}
