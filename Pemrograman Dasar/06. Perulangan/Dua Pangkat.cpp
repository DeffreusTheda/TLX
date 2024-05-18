#include <iostream>
using namespace std;

int main() {
    float value, end;
    cin >> value;
    while (value >= 2) {
        end = value/2;
        value = end;
    }
    if (value == 1) {
        cout << "ya";
    } else {
        cout << "bukan";
    }
    return 0;
} // ya gitu deh, gtw