#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// http://c.biancheng.net/view/vip_2078.html

int println(const char *fmt, ...)
{
        char printf_buf[1024];
        va_list args;
        int printed;

        va_start(args, fmt);
        printed = vsprintf(printf_buf, fmt, args);
        va_end(args);

        puts(printf_buf);

        return printed;
}

// 读取文本文件中的内容

// t 表示文本文件
// b 表示二进制文件

int main () {
  FILE *p = NULL;

  char ch;

  if ((p = fopen("./a.txt", "rt")) == NULL) {
    puts("Fail to open file!");
    exit(0);
  }

  // 逐字符读取文件
  while ((ch = fgetc(p)) != EOF) {
    putchar(ch);
  }

  putchar('\n');

  // 可选
  if (ferror(p)) {
    puts("读取出错");
  } else {
    puts("读取成功");
  }

  fclose(p);
  return 0;
}
