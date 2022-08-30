#include <stdio.h>
#include "../utils/show_bytes/show_bytes.h"

int main() {
  int testInt = 19;
  printf("show bytes of %d: ", testInt);
  show_int(testInt);

  float testFloat = 0.75;
  printf("show bytes of %f: ", testFloat);
  show_float(testFloat);

  printf("show bytes of pointer of int: ");
  show_pointer(&testInt);

  return 0;
}