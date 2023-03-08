#include <stdio.h>

int main () {
  int arr[] = {1, 5, 3, 4, 3};
  int i = 0;
  int j = 0;
  int temp;

  int len = sizeof(arr) / sizeof(arr[0]);
  printf("%d \n", len);
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int curr = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = curr;
      }
    }
  }

  /**
   * len - 1 = 4;
   * i = 0; j = 0; {1, 5, 3, 4, 3}
   * i = 0; j = 1; {1, 3, 5, 4, 3}
   * i = 0; j = 2; {1, 3, 4, 5, 3}
   * i = 0; j = 3; {1, 3, 4, 3, 5}
   *
   * len - 1 - i = 3
   * i = 1; j = 0; {1, 3, 4, 3, 5}
   * i = 1; j = 1; {1, 3, 4, 3, 5}
   * i = 1; j = 2; {1, 3, 3, 4, 5}
   *
   * len - 1 - i = 2;
   * i = 2; j = 0; {1, 3, 3, 4, 5}
   * i = 2; j = 1; {1, 3, 3, 4, 5}
   *
   * len - 1 - i = 1;
   * i = 3; j = 0; {1, 3, 3, 4, 5}
  */

  for (i = 0; i < len; i++) {
    printf("%d \t", arr[i]);
  }

  return 0;
}
