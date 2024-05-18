#include <cstdio>

int rowCount, swapCount, x, y;
char P[5], Q[5];

void swap (int &a, int &b) {
    int holder = a;
    a = b;
    b = holder;
}

int main() {
    scanf("%d", &rowCount);
    int inputs[2][rowCount];
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < rowCount; i++) {
            scanf("%d", &inputs[j][i]);
        }
    }

    scanf("%d", &swapCount);
    for (int j = 0; j < swapCount; j++) {
        scanf("%s %d %s %d", P, &x, Q, &y);
        int intP = P[0] - 'A';
        int intQ = Q[0] - 'A'; 
        swap(inputs[intP][x-1], inputs[intQ][y-1]);
    }

    for (int x = 0; x < 2; x++) {
        for (int i = 0; i < rowCount; i++) {
            printf("%d ", inputs[x][i]);
        }
        printf("\n");
    }
}