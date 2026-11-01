#include <stdio.h>
#include "intlist.h"

int main(void) {
    IntList scores;
    int input_score;
    
    list_init(&scores);
    
    printf("=== รับค่าคะแนนนักเรียน (ป้อน -1 เพื่อจบการทำงาน) ===\n");
    while (1) {
        printf("ป้อนคะแนน: ");
        if (scanf("%d", &input_score) != 1) break;
        if (input_score == -1) break;
        
        if (!list_append(&scores, input_score)) {
            printf("รายการเต็ม ไม่สามารถเพิ่มคะแนนได้อีก!\n");
            break;
        }
    }
    
    int n = list_size(&scores);
    if (n == 0) {
        printf("ไม่มีข้อมูลคะแนน\n");
    } else {
        int total = list_sum(&scores);
        double avg = (double)total / n;
        
        printf("\n--- สรุปผล ---\n");
        printf("จำนวนนักศึกษา : %d คน\n", n);
        printf("ผลรวมคะแนน    : %d คะแนน\n", total);
        printf("คะแนนเฉลี่ย   : %.2f คะแนน\n", avg);
    }
    
    return 0;
}
