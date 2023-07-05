#include <stdio.h>

int main()
{
  int i;

  for (i = 0; i <= 25; i++)
  {
    printf("%c", 'a' + i);
    printf("%c\t", 'A' + i);
  }

  printf("\n");
  // 0 - 9
  for (i = 48; i < 58; i++)
  {
    printf("%c \t", (char)i);
  }
  printf("\n");
  return 0;
}