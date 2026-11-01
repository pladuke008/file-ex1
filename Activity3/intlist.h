#ifndef INTLIST_H
#define INTLIST_H

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} IntList;

void list_init(IntList *L);
int  list_is_empty(const IntList *L);
int  list_is_full(const IntList *L);
int  list_append(IntList *L, int x);
int  list_get(const IntList *L, int i, int *out);
int  list_size(const IntList *L);

/* ฟังก์ชันเพิ่มตามกิจกรรมที่ 3.2 */
int list_sum(const IntList *L);
int list_find(const IntList *L, int key);
int list_remove_last(IntList *L, int *out);

#endif
