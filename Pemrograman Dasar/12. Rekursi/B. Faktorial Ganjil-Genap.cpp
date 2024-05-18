#include <iostream>
using namespace std;

// moga moga masuk final ygy

int input, output;

int fact(int test) {
    int res = 1, idk;
    for (int i = 2; i <= test; i++) {
        idk = i;
        if (i % 2 == 0) idk = i/2;
        res *= idk;
    }
    return res;
}

int main() {
    cin >> input;
    cout << fact(input);
    return 0;
}