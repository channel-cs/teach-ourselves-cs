#include <stdio.h>

typedef unsigned char *byte_pointer;

/* size_t: https://namu.wiki/w/size_t */
void show_bytes(byte_pointer start, size_t len) {
  size_t i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_short(short x) {
  show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
  show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {
  show_bytes((byte_pointer) &x, sizeof(double));
}

int is_little_endian() {
  int x = 1;
  byte_pointer px = (byte_pointer) &x;

  if (px[0] == 1) {
    return 1;
  }

  return 0;
}

int main() {
  show_short(0x1234);
  show_long(123123213212132123);
  printf("%d", is_little_endian());
  printf("\n");
  return 0;
}
