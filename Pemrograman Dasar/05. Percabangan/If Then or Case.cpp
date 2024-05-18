#include <iostream>

int main() {
    int value;
    std::cin >> value;
    if(value < 10) {
        printf("%s", "satuan");
    } else if(value < 100) {
        printf("%s", "puluhan");
    } else if(value < 1000) {
        printf("%s", "ratusan");
    } else if(value < 10000) {
        printf("%s", "ribuan");
    } else if(value < 100000) {
        printf("%s", "puluhribuan");
    }
}