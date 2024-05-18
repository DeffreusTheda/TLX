#include <cstdio>

int main() {
    int yInput, xInput;
    scanf("%d %d", &yInput, &xInput);
    int matrix[yInput][xInput];

    // insert inputs into the array
    for (int x = 0; x < yInput; x++) {
        for (int i = 0; i < xInput; i++) {
            scanf("%d", &matrix[x][i]);
        }
    }

    // output rotated matrix
    for (int x = 0; x < xInput; x++) {
        for (int i = yInput-1; i >= 0; i--) {
            printf("%d", matrix[i][x]);
            if (i == 0) printf("\n");
            else printf(" ");
        }
    }
}