#include <stdio.h>
#include "./config/config.h"

#if MODE
  #include "./config/.env.h"
#else
  #include "./config/.env.local.h"
#endif

int main () {
  printf("%d", FLAG);
  return 0;
}
