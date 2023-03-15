#include <stdio.h>
#include <stdlib.h>

extern void printResult(char opr, float num1, float num2, float result);

// 实现加减乘除运算
int main () {
  char opr;
  float num1, num2, result;

  printf("请输入要进行的计算: + - * / \n");
  scanf("%c", &opr);
  printf("请输入运算的数字 \n");
  scanf("%f %f", &num1, &num2);

  switch (opr)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      printf("除数不能为 0 \n");
      exit(-1);
    }
    result = num1 / num2;
    break;
  default:
    printf("不支持%c操作\n", opr);
    break;
  }

  printResult(opr, num1, num2, result);
  return 0;
}


void printResult(char opr, float num1, float num2, float result) {
  printf("%.2f %c %.2f = %.2f", num1, opr, num2, result);
}

