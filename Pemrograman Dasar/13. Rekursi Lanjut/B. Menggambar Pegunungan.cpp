#include <iostream>
#include <cstring>
using namespace std;

// "It'll get better."

int input;

void draw(int test) {
    if (test == 1) {
        cout << "*";
        return;
    }

    /*char middle[test];
    memset(middle, '*', test);*/
    // OR
    string middle(test, '*');

    draw(test-1);
    cout << "\n" << middle << "\n";
    draw(test-1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> input;
    draw(input);

    return 0;
}