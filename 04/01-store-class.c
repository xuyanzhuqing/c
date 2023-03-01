#include <stdio.h>

// auto 存储类
void autoStorage () {
  int mount;
  auto int age; // auto 存储类 局部使用，用完即销毁
  printf("mount is %d \n", mount);
}

// register 存储类
void registerStorage () {
  register int counter; // 可能存储到寄存器，也可能存储到内存中，一个字快，适用于频繁取用的值
}

// static 存储类
static int initInGlobe = 233; // 全局变量，限定在同一文件类适用
void staticStorage () {
  static int initOnce = 0; // 只在定义的时候被初始化
  initOnce++;

  printf("check init once value is %d \n", initOnce);
}


// extern 存储类

int main () {
  autoStorage();
  registerStorage();

  staticStorage(); // 1
  staticStorage(); // 2
  staticStorage(); // 3
  return 0;
}
