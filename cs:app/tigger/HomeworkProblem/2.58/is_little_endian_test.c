#include <stdio.h>
#include "../utils/is_little_endian/is_little_endian.h"

int main() {
  printf("is little endian: %d\n", is_little_endian());
  return 0;
}