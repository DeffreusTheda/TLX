#include <iostream>

int main() {
    int value;
    std::cin >> value;
    if(value > 0) {
        printf("%s", "positif");
    } else if(value < 0) {
        printf("%s", "negatif");
    } else {
        printf("%s", "nol");
    }
}