#include <stdio.h>

int main(void) {
    printf("char      : %zu\n", sizeof(char));
    printf("short     : %zu\n", sizeof(short));
    printf("int       : %zu\n", sizeof(int));
    printf("long      : %zu\n", sizeof(long));
    printf("long long : %zu\n", sizeof(long long));
    printf("float     : %zu\n", sizeof(float));
    printf("double    : %zu\n", sizeof(double));
    printf("int*      : %zu\n", sizeof(int *));
    return 0;
}
```[cite: 2]

---

#### **ไฟล์ที่ 2:** พิมพ์ชื่อไฟล์ว่า `Activity1/act1_2.c`[cite: 2]
```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("INT_MIN  : %d\n", INT_MIN);
    printf("INT_MAX  : %d\n", INT_MAX);
    printf("UINT_MAX : %u\n", UINT_MAX);
    printf("FLT_DIG  : %d\n", FLT_DIG);
    printf("DBL_DIG  : %d\n", DBL_DIG);
    return 0;
}
```[cite: 2]

---

#### **ไฟล์ที่ 3:** พิมพ์ชื่อไฟล์ว่า `Activity1/act1_3.c`[cite: 2]
```c
#include <stdio.h>

int main(void) {
    unsigned char val = 250;
    for (int i = 0; i < 10; i++) {
        printf("val = %d\n", val);
        val++;
    }
    return 0;
}
```[cite: 2]
