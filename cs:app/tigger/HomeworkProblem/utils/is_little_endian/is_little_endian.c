#define byte_pointer unsigned char*

int is_little_endian() {
    int x = 1;
    byte_pointer p = (byte_pointer) &x;
    return p[0];
}