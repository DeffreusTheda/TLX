#include <iostream>
using namespace std;

int penjumlahan(int &a, int b) {
    b = ++a + b;
    return a + b;
}

int main() {
    int a = -1, b = 10;
    a && penjumlahan(b, 10);
    cout << b << endl;
    return 0;
}