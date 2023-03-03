# include <stdio.h>
int main(void)
{
    char str[20];  /*定义一个最大长度为19, 末尾是'\0'的字符数组来存储字符串*/
    printf("请输入一个字符串:");
    fgets(str, 7, stdin);  /*从输入流stdin即输入缓冲区中读取7个字符到字符数组str中*/
    printf("%s\n", str);

    for (int i = 0; i < 20; i++) {
      printf("%c", str[i]);
    }
    return 0;
}