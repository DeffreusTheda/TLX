#include <iostream>
using namespace std;

// "it's okay."

int input;

string toBiner(int test) {
    if (test == 0) return "0";
    if (test == 1) return "1";
    if (test % 2 == 1) return toBiner(test/2) + "1";
    else return toBiner(test/2) + "0";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> input;
    cout << toBiner(input);

    return 0;
}