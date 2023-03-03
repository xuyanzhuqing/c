#include <stdio.h>

int main()
{
    char c[100];
    float f;
    printf("Enter a number: ");
    // %f 匹配浮点型数据
    scanf("%s %f", c, &f);
    printf("c = %s, f = %f \n",c, f);
    return 0;
}