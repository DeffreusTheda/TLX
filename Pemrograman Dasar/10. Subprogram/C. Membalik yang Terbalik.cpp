#include <cstdio>

int reverse(int test) {
    int holder = test;
    int res = 0;
    while (holder > 0) {
        res = (res*10) + (holder % 10);
        holder = holder / 10;
    }
    return res;
}

int main() {
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    printf("%d", reverse(reverse(input1) + reverse(input2)));
}