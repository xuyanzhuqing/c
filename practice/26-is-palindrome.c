#include <stdio.h>
#include <stdbool.h>

// 判断回文字符串
bool isPalindromeString (char *str, int len) {
  // 注意注意注意，最后一位是 \0, 所以应该比对的是0～len - 1之间的字符
  int i;
  int mid = (len - 1) / 2;
  printf("%s, len = %d, mid = %d, %c \n", str, len, mid, str[len - 2]);
  for (i = 0; i < mid; i++) {
    if (str[i] != str[len - 2 - i]) {
      return false;
    }
  }

  return true;
}

// 判断回文数字
bool isPalindromeNumber (int num) {
  int reverted = 0;
  int originNum = num;
  while (num != 0 ) {
    reverted = reverted * 10 + num % 10;
    num /= 10;
  }

  return reverted == originNum;
}


//是否是回文字符串
int main () {
  char insert1[] = "abcdefg"; // 奇数
  char insert2[] = "abcdadcba"; // 偶数

  printf("%s %s回文 \n", insert1, isPalindromeString(insert1, sizeof(insert1) / sizeof(*insert1)) ? "是" : "不是");
  printf("%s %s回文 \n", insert2, isPalindromeString(insert2, sizeof(insert2) / sizeof(insert2[0])) ? "是" : "不是");


  int num1 = 99;
  int num2 = 101;
  printf("%d %s回文数字 \n", num1, isPalindromeNumber(num1) ? "是" : "不是");
  printf("%d %s回文数字 \n", num2, isPalindromeNumber(num2) ? "是" : "不是");

  return 0;
}
