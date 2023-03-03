#include <stdio.h>

// 位域 的作用是为了节约内存
struct Scores {
  int roundOne;
  int roundTwo;
} scores;

struct Scores1 {
  int roundOne: 1;
  int roundTwo: 1;
} scores1;

struct Scores2 {
  int roundOne: 32;
  int roundTwo: 1;
  int roundThree: 1;
  int roundFour: 30;
} scores2;

int main () {
  printf("scores 字节长度 = %lu \n", sizeof(scores)); // 8
  printf("scores1 字节长度 = %lu \n", sizeof(scores1)); // 4
  printf("scores2 字节长度 = %lu \n", sizeof(scores2)); // 8

  printf("%p", &scores1);
  return 0;
}
