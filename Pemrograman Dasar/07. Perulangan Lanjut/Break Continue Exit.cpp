#include <iostream>
using namespace std;

int main() {
    int value, current = 0;
    cin >> value;
    while (current < value) {
        ++current;

        // stop at 42
        if (current == 42) {
            cout << "ERROR" << endl;
            break;
            return 0;
        }
        
        if (current % 10 == 0) {
            continue;
        } else { //print value
            cout << current << endl;
        }
    }
    return 0;
}