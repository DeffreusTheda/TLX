#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int input, R, C;
    scanf("%d", &input);
    R = 1;
    C = input;
    for (int x = 1; x <= input; x++) {
        for (int i = 1; i <= input; i++) {
            if (x * i == input) {
                if (abs(R-i) - abs(x-i)) {
                    R = x;
                    C = i;
                }
            }
        }
    }
    printf("%d %d\n", R, C);
}
// since this method pick the first pair of number that is both factorial to input, it'll always be ""::input 1"