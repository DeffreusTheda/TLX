#include <cstdio>

int main() {
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);
    int A[N][M];
    int B[M][P];
    int C[N][P];
    // input first matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // input second matrix
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // calculate third matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    // output third matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}