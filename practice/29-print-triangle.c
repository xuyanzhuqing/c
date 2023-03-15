#include <stdio.h>

void rightAngle1 (int a, int b) {
  int i, j;
  for (j = 1; j <= b; j++) {
    for (i = 1; i <= j && i <= a; i++) {
      printf("* ");
    }
    printf("\n");
  }
}

void rightAngle2(int num) {
  int i, j;

  for (i = 0; i < num; i++) {
    for (j = num - i; j >= 1; j--) {
      printf("* ");
    }
    printf("\n");
  }
}

void rightAngle3 (int num) {
  int i, j;

  for (i = 0; i < num; i++) {
    for (j = 0; j < num; j++) {
      if (j < i) {
        printf("  ");
      } else {
        printf("* ");
      }
    }
    printf("\n");
  }
}


int main () {
  rightAngle1(6, 6);
  rightAngle2(6);
  rightAngle3(6);
  return 0;
}
