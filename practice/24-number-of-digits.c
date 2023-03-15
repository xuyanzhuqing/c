#include <stdio.h>

int countDigits (double num) {
  int res = 0, tmp = num;

  while (tmp >= 1) {
    res++;
    tmp /= 10;
  }

  printf("%f 是 %d 位数 \n", num, res);
  return res;
}

int main () {
  countDigits(9);
  countDigits(10);
  countDigits(123);
  countDigits(1234);
  return 0;
}
