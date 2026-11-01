#include <stdio.h>

int main(void) {
    unsigned char val = 250;
    for (int i = 0; i < 10; i++) {
        printf("val = %d\n", val);
        val++;
    }
    return 0;
}
