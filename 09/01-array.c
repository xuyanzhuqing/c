#include <stdio.h>


// 一维数组
void demo1 () {
  char *numbers[] = { "ann", "cungen" };
  printf("the second audience is %s \n ", numbers[1]);
}

// 数组传参
void demo2 (int scores[3][5] /* int scores[][5] */, int outerLen, int innerLen) {
  for (int i = 0; i < outerLen; i++) {
    for (int j = 0; j < innerLen; j++) {
      printf("%d \t", scores[i][j]);
    }
    printf("\n");
  }
}

// 数组
int main () {
  int scores[3][5] = {
    { 90, 100, 80, 75, 90},
    { 60, 70, 80, 70, 60 },
    { 60, 70, 80, 70, 60 }
  };

  int outerLen = sizeof(scores) / sizeof(scores[0]);
  int innerLen = sizeof(scores[0]) / sizeof(scores[0][0]);
  demo2(scores, outerLen, innerLen); // SB 必须在外部求好rows，cols
  demo1();
  return 0;
}
