#include <cstdio>

int main() {
    int count, height, first = 0, second = 100001;
    scanf("%d %d", &count, &height);
    int numbers[count];
    
    // insert jumps to array
    for (int x = 0; x < count; x++) scanf("%d", &numbers[x]);

    // set the first jump
    for (int x = 0; x < count; x++) {
        if (first < numbers[x]) first = numbers[x];
    }

    height = height - first;
    if (height <= 0) {
        printf("%d", first);
        return 0;
    }

    // find the next jump length
    for (int x = 0; x < count; x++) {
    if (numbers[x] >= height && numbers[x] < second) second = numbers[x];
    }

    printf("%d", first + second);
}