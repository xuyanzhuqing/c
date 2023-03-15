#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/*
153=1^3+5^3+3^3
1634=1^4+6^4+3^4+4^4
*/

// 计算 n 位数
int countByte (int num) {
  int res = 0;

  while (num != 0) {
    res++;
    num /= 10;
  }
  return res;
}

// 计算任意长度数字是否位水仙花数
bool isArmStrong (int num) {
  int index = countByte(num);
  int originalNum = num;
  int tmp = 0;
  while (num != 0) {
    originalNum -= pow(num % 10, index);
    num /= 10;
  }

  return originalNum == 0;
}

int main () {
  int arr[] = {153, 1634, 1342};
  int len = sizeof(arr) / sizeof(int);
  int i;
  for (i = 0; i < len; i++) {
    printf("%d %s 水仙花数\n", arr[i], isArmStrong(arr[i]) ? "是" : "不是");
  }

  // 100 - 1000 之间的水仙花数
  int low = 100;
  printf("100 - 1000 之间的水仙花数: ");
  while (low < 1000) {
    if (isArmStrong(low)) {
      printf("%d \t", low);
    }

    low++;
  }
  return 0;
}
