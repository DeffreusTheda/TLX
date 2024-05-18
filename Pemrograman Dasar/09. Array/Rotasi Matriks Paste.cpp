#include <cstdio>

int yInput, xInput;

int main() {
  scanf("%d %d", &yInput, &xInput);
  int matriks[yInput][xInput];
  for (int i = 0; i < yInput; i++) {
    for (int j = 0; j < xInput; j++) {
      scanf("%d", &matriks[i][j]);
    }
  }

  for (int i = 0; i < xInput; i++) {
    for (int j = yInput-1; j >= 0; j--) {
      printf("%d", matriks[j][i]);
      if (j == 0) {
        printf("\n");
      } else {
        printf(" ");
      }
    }
  }
}