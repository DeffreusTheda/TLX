#include <iostream>
using namespace std;

int main() {
    int value, sum = 0;
    while (cin >> value) {
        sum += value;
    }
    cout << sum << endl;
}
// how sadly late, I learned that the default value for unexpressed variable is 1