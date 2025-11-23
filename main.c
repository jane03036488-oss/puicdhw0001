#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1000000;  // 100 萬筆資料
    float *A, *B, *C;

    // 配置記憶體
    A = (float*)malloc(n * sizeof(float));
    B = (float*)malloc(n * sizeof(float));
    C = (float*)malloc(n * sizeof(float));

    // 初始化
    for (int i = 0; i < n; i++) {
        A[i] = i * 1.0f;
        B[i] = i * 2.0f;
    }

    // 向量加法 (CPU)
    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    // 印出部分結果
    printf("C[0] = %f\n", C[0]);
    printf("C[1] = %f\n", C[1]);
    printf("C[last] = %f\n", C[n-1]);

    // 釋放記憶體
    free(A);
    free(B);
    free(C);

    return 0;
}

