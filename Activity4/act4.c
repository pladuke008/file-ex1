#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long sum_all(const int A[], int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    return sum;
}

long long count_even_pairs(const int A[], int n) {
    long long count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((A[i] + A[j]) % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    int sizes[] = {1000, 2000, 4000, 8000, 16000};
    int k = sizeof(sizes) / sizeof(sizes[0]);

    srand(2568);
    for (int t = 0; t < k; t++) {
        int n = sizes[t];
        int *A = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) A[i] = rand() % 1000;

        clock_t s1 = clock();
        long long r1 = sum_all(A, n);
        clock_t e1 = clock();

        clock_t s2 = clock();
        long long r2 = count_even_pairs(A, n);
        clock_t e2 = clock();

        printf("n=%6d  sum=%lld (%.4f s)  pairs=%lld (%.4f s)\n",
               n, r1, (double)(e1 - s1) / CLOCKS_PER_SEC,
                  r2, (double)(e2 - s2) / CLOCKS_PER_SEC);
        free(A);
    }
    return 0;
}
