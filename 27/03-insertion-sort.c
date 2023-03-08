#include <stdio.h>
#include "../utils.h"
void insertion_sort(int arr[], int len){
    int i,j,temp;
    for (i=1; i<len; i++){
            temp = arr[i];
            for (j=i; j>0 && arr[j-1]> temp; j--)
                    arr[j] = arr[j-1];
            arr[j] = temp;
    }
}

int main () {
  int arr[] = {4, 2, 1, 6};
  /**  <-|
   * {4, 2, 1, 6}
   *      <-|
   * {2, 4, 1, 6}
   * {2, 1, 4, 6}
   * {1, 2, 4, 6}
   *          <-|
   * {1, 2, 4, 6}
   * {1, 2, 4, 6}
   * {1, 2, 4, 6}
   * {1, 2, 4, 6}
  */

  /**
   * i = 1;
   * j = 1; temp = 2; arr[j-1] = 4; {2, 4, 1, 6}
   * i = 2;
   * i = 3;
   * i = 4;
  */

  insertion_sort(arr, 4);

    for (int k = 0; k < 4; k++)
  {
    printf("%d \t", arr[k]);
    /* code */
  }

  return 0;
}
