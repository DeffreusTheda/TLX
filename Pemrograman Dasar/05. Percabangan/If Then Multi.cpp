#include <cstdio>
#include <iostream>

int main() {
    int value;
    std::cin >> value;
    int genapAtauGanjil = value % 2;
    if(value > 0 && genapAtauGanjil == 0) {
        printf("%d", value);
    } else
    return 0;
}