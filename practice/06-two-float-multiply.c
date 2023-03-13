#include <stdio.h>

int main () {
  double a, b, c;

  scanf("%lf %lf", &a, &b);

  c = a + b;

  printf("a + b = %.2lf \n", c);
  return 0;
}
