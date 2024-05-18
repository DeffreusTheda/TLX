#include <cstdio>

int main() {
    int input;
    scanf("%d", &input);
    int hour = input/3600;
    input = input-(hour*3600);
    int minute = input/60;
    input = input-(minute*60);
    int second = input;

    printf("%d\n%d\n%d", hour, minute, second);
}