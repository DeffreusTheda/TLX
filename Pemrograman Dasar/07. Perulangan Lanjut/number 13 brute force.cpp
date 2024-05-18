#include <iostream>
using namespace std;

int main() {
    int input, tengah = 1; string prev = "0";
    cin >> input;
    for (int x = 0; x < input; x++) {
        prev = prev + to_string(tengah) + prev;
        cout << prev;
    }
}