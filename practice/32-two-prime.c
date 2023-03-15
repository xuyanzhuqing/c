#include <stdio.h>
#include <stdbool.h>
// 判断一个数字是否是两个素数之和

bool isPrime(int num) {
  if (num < 2) {
    return false;
  }

  int mid = num / 2;
  int i;
  for (i = 2; i <= mid; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main () {
  // 第一步找到小于num的所有质数
  // for (int i = 0; i < 100; i++) {
  //   if (isPrime(i)) {
  //     printf("%d \t", i);
  //   }
  // }
  int num = 128; // 61 + 67 31 + 97;

  int j, k;
  for (j = 2; j < num / 2 /*去除重复的一半*/; j++) {
    if (isPrime(j)) {
      // 我想到的
      // for (k = j; k < num; k++) {
      //   if (isPrime(k) && j + k == num) {
      //     printf("%d = %d + %d \n", num, j, k);
      //     break;
      //   }
      // }
      // 更好的办法
      if (isPrime(num - j)) {
        printf("%d = %d + %d \n", num, j, num - j);
        break;
      }
    }
  }
  // 两两相加等于num的两个质数
  return 0;
}
