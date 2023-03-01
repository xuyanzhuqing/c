#include <stdio.h>

// 函数指针
int add (int a, int b) {
  return a + b;
}

int is_adult (int age) {
  return age >= 18;
}

int * filterAdult(int *arr, int len, int *adults, int (* filter)(int)) {
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (filter(*arr)) {
      adults[j++] = *arr;
    }
    arr++;
  }

  return adults;
}

void demo1 () {
  int (* p)(int, int) = &add;

  int a, b, c, d;
  a = 10, b = 20, c = 30;

  d = p(p(a, b), c);

  printf("sum all: %d \n", d);
}

void demo2 () {
  // 如何实现动态类型分配
}

// 回调函数

int main () {
  demo1();

  int ages[] = { 17, 19, 18, 20, 32, 60 };
  int l = sizeof(ages) / sizeof(ages[0]);
  int adults[5] = {};
  filterAdult(ages, l, adults, is_adult);

  int len = sizeof(adults) / sizeof(adults[0]);

  printf("adult: %d \n", len);
  for (int i = 0; i< len; i++) {
    printf("adult: %d \n", adults[i]);
  }

  return 0;
}
