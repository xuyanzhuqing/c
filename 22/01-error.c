#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../utils.h"
#include <errno.h>

extern int errno;

int main () {
  FILE *p = NULL;
  int errnum;

  if ((p = fopen("./none-existed.tx", "r")) == NULL) {
    errnum = errno;

    errnum = errno;
    fprintf(stderr, "错误号: %d\n", errno);
    perror("通过 perror 输出错误");
    fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));

    // 程序异常退出码 -1
    exit(EXIT_FAILURE);
  } else {
    fclose(p);
  }

  // 成功推出状态码
  // exit(EXIT_SUCCESS);

  return 0;
}
