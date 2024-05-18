#include <iostream>
#include <cstring>
using namespace std;

// we love you

string input;

string isPalindrom(string test) {
    int length = test.length();
    int lChar = length - 1;
    if (test[0] == test[lChar]) {
        test.erase(lChar, 1);
        length--;
        if (length > 0) {
            test.erase(0, 1);
            length--;
        }
        if (length == 0) return "YA";
        return isPalindrom(test);
    } else return "BUKAN";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> input;
    cout << isPalindrom(input);

    return 0;
}