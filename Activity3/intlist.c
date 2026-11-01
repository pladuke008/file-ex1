#include <stdio.h>
#include "intlist.h"

void list_init(IntList *L) { 
    L->size = 0; 
}

int list_is_empty(const IntList *L) {
    return L->size == 0;
}

int list_is_full(const IntList *L) {
    return L->size == MAX_SIZE;
}

int list_append(IntList *L, int x) {
    if (list_is_full(L)) return 0;
    L->data[L->size++] = x;
    return 1;
}

int list_get(const IntList *L, int i, int *out) {
    if (i < 0 || i >= L->size) return 0;
    *out = L->data[i];
    return 1;
}

int list_size(const IntList *L) {
    return L->size;
}

int list_sum(const IntList *L) {
    int sum = 0;
    for (int i = 0; i < L->size; i++) {
        sum += L->data[i];
    }
    return sum;
}

int list_find(const IntList *L, int key) {
    for (int i = 0; i < L->size; i++) {
        if (L->data[i] == key) return i;
    }
    return -1;
}

int list_remove_last(IntList *L, int *out) {
    if (list_is_empty(L)) return 0;
    *out = L->data[--(L->size)];
    return 1;
}
