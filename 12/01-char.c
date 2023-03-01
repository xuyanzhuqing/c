#include <stdio.h>
#include <string.h>

// 在 C 语言中，字符串实际上是使用空字符 \0 结尾的一维字符数组。因此，\0 是用于标记字符串的结束。
// 空字符（Null character）又称结束符，缩写 NUL，是一个数值为 0 的控制字符，\0 是转义字符，意思是告诉编译器，这不是字符 0，而是空字符。

void demo1 () {
  char name[] = { 'm', 'i', 'c', 'h', 'a', 'e', 'l', '\0'}; // 最后一位是控制字符
  char name1[] = "ann";

  name[0] = 'M'; // 注意注意注意： c语言字符串是可变的
  printf("%s %lu \t",name, strlen(name));
  printf("%s %lu \t", name1, strlen(name1));

  char str1[14] = "runoob";
  char str2[14] = "google";
  char str3[14];
  int  len ;

  /* 复制 str1 到 str3 */
  strcpy(str3, str1);
  printf("strcpy( str3, str1) :  %s\n", str3 );

  /* 连接 str1 和 str2 */
  strcat( str1, str2);
  printf("strcat( str1, str2):   %s\n", str1 );

  /* 连接后，str1 的总长度 */
  len = strlen(str1);
  printf("strlen(str1) :  %d\n", len );
}

void demo2 () {

}

int main () {
  demo1();
  return 0;
}
