#include <stdio.h>


// 传递数组的地址
void demo1 (int *arr, int len) {
  int i = 0;
  while (i++ < len) {
    printf("%d \n", *arr);
    arr++;
  }
}

// 传递定义好长度的数组
void demo2 (int arr[10], int len) {
}

// 传递不定长的数组
void demo3 (int arr[], int len) {}

int main () {
  int balance[5] = { 100, 90, 80, 85, 75 };

  int len = sizeof(balance) / sizeof(balance[0]);

  demo1(balance, len);
  demo2(balance, len);
  demo3(balance, len);
  return 0;
}
