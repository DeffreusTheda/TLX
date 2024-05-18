#include <iostream>
using namespace std;

int value;

int main() {
    cin >> value;
    for (int x = value; x >= 1; x--) {
        if (value % x == 0) {
            cout << x << endl;
        }
    }
} // yey :D