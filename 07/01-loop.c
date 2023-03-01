#include <stdio.h>

int main () {

  for (int i = 0; i < 10; i++) {
    printf("i now is %d \n", i);
  }

  int age = 0;

  while (++age < 18) {
    printf("now you age is %d, you are not an adult util you are 18 \n", age);
  }

  int step = 1;
  do {
    printf("do is the best, talk is cheap \n"); // whatever step is, it always print a message
    step++;
  } while (step < 1);


  for (int i = 0; i < 67; i++) {
    if (i == 60) { // 现在退休年龄
      printf("you are still need to work \n");
      continue;
    }

    if (i == 65) { // 未来退休年龄
      printf("you are going to die, please live for your self \n");
      break;
    }

    if (i > 65) {
      printf("live for self ?, dreaming about it");
    }
  }

  // for (;;) {
  //   printf("earn money!");
  // }

  return 0;
}
