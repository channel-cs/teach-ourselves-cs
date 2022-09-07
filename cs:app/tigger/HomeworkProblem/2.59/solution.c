#include <stdio.h>
#include "../utils/show_bytes/show_bytes.h"

int solution(int x, int y) {
  int resultX = x & 0xFF;
  int resultY = y & ~0xff;
  return resultX + resultY;
}

int main() {
  int testInt1 = 12391231;
  int testInt2 = 345346346;

  printf("testInt1: %d\n", testInt1);
  printf("bytes of testInt1: ");
  show_int(testInt1);

  printf("testInt2: %d\n", testInt2);
  printf("bytes of testInt2: ");
  show_int(testInt2);

  printf("solution: ");
  show_int(solution(testInt1, testInt2));

  return 0;
}