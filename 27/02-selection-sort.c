#include <stdio.h>
#include "../utils.h"

// 选择排序原理，找出最小的
int main () {
  int arr[] = {1, 5, 3, 4, 4};
  int i;
  int j;
  int tmp;

  int len = (int) sizeof(arr) / sizeof(*arr);
  // for (i = 0 ; i < len - 1; i++) {
  //   int min = i;
  //   for (j = i + 1; j < len; j++) {
  //     if (arr[j] < arr[min]) {
  //       min = j;
  //     }
  //   }

  //   if (min != i) {
  //     tmp = arr[min];
  //     arr[min] = arr[i];
  //     arr[i] = tmp;
  //   }
  // }

  /** arr[j] < arr[min]
   * i = 0; min = i = 0;
   * j = 1; min = 0; min -> 0;
   * j = 2; min = 0; min -> 0;
   * j = 3; min = 0; min -> 0;
   * j = 4; min = 0; min -> 0;
   * 不交换
   *
   * i = 1; min = i = 1;
   * j = 2; min = 1; min -> 2;
   * j = 3; min = 2; min -> 2;
   * j = 4; min = 2; min -> 2;
   * (i = 1) != (min = 2), 交换3, 5
   * {1, 3, 5, 4, 4}
   *
   * i = 2; min = i = 2;
   * j = 3; min = 2; min -> 3;
   * j = 4; min = 3; min -> 3;
   * (i = 2) != (min = 3), 交换5, 4
   * {1, 3, 4, 5, 4}
   *
   * i = 3;
   * j = 4; min = 3; min -> 4;
   * (i = 3) != (min = 4), 交换5， 4
   * {1, 3, 4, 4, 5}
   *
  */

  for (i = 0; i < len - 1; i++) {
    int min = i;
    for (j = i + 1; j < len; j++) {
      if (arr[min] > arr[j]) {
        min = j;
      }
    }

    if (min != i) {
      tmp = arr[min];
      arr[min] = arr[i];
      arr[i] = tmp;
    }
  }


  for (int k = 0; k < len; k++)
  {
    printf("%d \t", arr[k]);
    /* code */
  }

  return 0;
}
