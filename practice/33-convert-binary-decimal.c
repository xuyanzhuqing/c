#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// 8 位存储，1位符号
#define byteBit 8;
typedef int BYTE[8];

// 整数十进制转二进制 3 -> 11
void decimal2binary (int num, int * res) {
  int i = byteBit;
  while (num != 0) {
    res[--i] = num % 2;
    num /= 2;
  }
}

// 00000011 -> 1*2^1 + 1*2^0
int binary2decimal(int * arr) {
  int res = 0;
  int i = 8 - 1;
  int rank = 0;
  for (;i >= 0; i--) {
    res = res + pow(arr[i] * 2, rank++);
  }

  return res;
}

// 浮点数十进制转二进制
// 10.125 -> 1010.001
void float2binary(float num, int * result1, int * result2) {
  int first = num; // 整数
  float second = num - first; // 小数
  int decimal = 18; // 精度

  decimal2binary(first, result1);

  // 小数部分
  int i = 0;
  while (decimal != 0) {
    second *= 2;
    result2[i] = second; // 整数 0 or 1
    second = second - result2[i]; // 小数部分
    i++;
    decimal--;
  }
}

float binary2float(char * str) {
  return 1.1;
}

int main () {
  // 十进制 <--> 二进制
  // BYTE result = {};
  // decimal2binary(3, result);

  // int len = sizeof(result) / sizeof(int);
  // for (int i = 0; i < len; i++) {
  //   printf("%d", result[i]);
  // }

  // printf("\n-------\n");
  // printf("%d", binary2decimal(result));

  BYTE result1 = {};
  BYTE result2 = {};

  // float2binary(10.125, result1, result2);
  float2binary(0.3, result1, result2);
  for (int i = 0; i < 8; i++) {
    printf("%d", result1[i]);
  }
  printf(".");
  for (int i = 0; i < 8; i++) {
    printf("%d", result2[i]);
  }
  return 0;
}
