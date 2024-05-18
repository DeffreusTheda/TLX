#include <cstdio>

int main() {
    int index = 0, array[100];

    while (scanf("%d", &array[index]) != EOF) {
        index++;
    }

    while (index > 0) {
        --index;
        printf("%d\n", array[index]);
    }
}