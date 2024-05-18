#include <cstdio>

int A, B, K, x;

int fX (int test) {
    int res = A*test + B;
    if (res < 0) res*= -1;
    return res;
}

int main() {
    scanf("%d %d %d %d", &A, &B, &K, &x);
    for (int i = 0; i < K; i++) {
        x = fX(x);
    }
    printf("%d", x);
}