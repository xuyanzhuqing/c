#include <stdarg.h>
#include <stdio.h>

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

// 预定义的 max 函数
#define MAX(x,y) ((x) > (y) ? (x) : (y))