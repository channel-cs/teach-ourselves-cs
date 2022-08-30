#include <stdio.h>
#include <limits.h>

typedef unsigned char *byte_pointer;

/**
 * 2.55 - 2.56
 * @see size_t: https://namu.wiki/w/size_t
*/
void show_bytes(byte_pointer start, size_t len) {
  size_t i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

/**
 * 2.57
 * 자료형 show_short, show_long과 show_double 같은 C 객체의 바이트 표시를 출력하는 short, long, double 프로시저를 작성하라.
 * 이들을 여러 가지 머신에서 실행해보라.
 */
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

/**
 * 2.58
 * 리틀 엔디안 머신에서 컴파일하고 실행하면 1을 리턴하고, 빅 엔디안 머신에서는 0을 리턴하는 프로시저 is-bttle_endian을 작성하라.
 * 이 프로그램은 사용하는 워드 길이와 상관없이 모든 컴퓨터에서 실행 가능해야 한다.
 */
int is_little_endian() {
  int x = 1;
  byte_pointer px = (byte_pointer) &x;
  return px[0];
}

/**
 * 2.59
 * x의 가장 덜 중요한 바이트와 y의 나머지 바이트들로 이루어진 워드를 만드는 C 수식을 작성하라.
 * 오퍼랜드 x=Ox89ABCDEF, y=0x7654321O 에 대해서 실행결과 0x765432EF를 출력해야 한다.
 * 
 * 삽질 1: intel mac에서 signed int로 할 경우 shift 연산에서 나머지 비트를 1로 채워서 원하는대로 동작하지 않았음.
 */
int join_msb_n_rests(unsigned int x, unsigned int y) {
  int byte_bits = 8;
  int max_bits = sizeof(x) * byte_bits;
  return ((x << (max_bits - byte_bits)) >> (max_bits - byte_bits)) | ((y >> byte_bits) << byte_bits);
}

int main() {
  // show_short(0x1234);
  // show_long(123123213212132123);
  // printf("%d", is_little_endian());
  // printf("\n");
  printf("%x", join_msb_n_rests(0x89ABCDEF, 0x76543210));
  return 0;
}
