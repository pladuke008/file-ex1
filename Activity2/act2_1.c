#include <stdio.h>

int main(void) {
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *)&x;

    printf("address of x = %p\n", (void *)&x);
    for (size_t i = 0; i < sizeof(x); i++) {
        printf("%p : %02X\n", (void *)(p + i), p[i]);
    }
    return 0;
}
