#include <stdio.h>

int main(void) {
    char c = 'A';
    int i = 100;
    double d = 3.14;
    int a[5] = {10, 20, 30, 40, 50};

    printf("Address of c   : %p\n", (void *)&c);
    printf("Address of i   : %p\n", (void *)&i);
    printf("Address of d   : %p\n", (void *)&d);
    
    for (int idx = 0; idx < 5; idx++) {
        printf("Address of a[%d]: %p\n", idx, (void *)&a[idx]);
    }
    return 0;
}
