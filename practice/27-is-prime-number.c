#include <stdio.h>
#include <stdbool.h>

// O(n2)
bool isPrimeNumber (int num) {
  int i;
  int j;
  for(i = 2; i <= num; i++) {
    for (j = 2; j <= num; j++) {
      if (i * j == num) {
        return false;
      }
    }
  }
  return true;
}
// O(n/2) -> O(n)
bool isPrimeNumber1 (int num) {
  int i, mid = num / 2;

  if (num < 2) return false;
  for (i = 2; i <= mid; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

void printPrimeBetweenTwoNumber (int lower, int high) {
  int i;
  int flag;
  while (lower < high) {
    flag = 0;
    // 判断是否是质数
    for (i = 2; i <= lower / 2; i++) {
      if (lower % i == 0) {
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
      printf("%d \t", lower);
    }

    lower++;
  }
}

int main () {
  for (int i = 2; i <= 100; i++) {
    // if (isPrimeNumber(i)) {
    //   printf("%d \t", i);
    // }
    // if (isPrimeNumber1(i)) {
    //   printf("%d \n", i);
    // }
  }

  printPrimeBetweenTwoNumber(6, 10);

  return 0;
}