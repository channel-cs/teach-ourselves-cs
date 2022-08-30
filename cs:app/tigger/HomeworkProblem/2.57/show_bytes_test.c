#include <stdio.h>
#include "../utils/show_bytes/show_bytes.h"

int main() {
  short testShort = 19;
  printf("show bytes of %hd: ", testShort);
  show_short(testShort);

  long testLong = 19;
  printf("show bytes of %ld: ", testLong);
  show_long(testLong);

  double testDouble = 0.75;
  printf("show bytes of %lf: ", testDouble);
  show_double(testDouble);

  return 0;
}