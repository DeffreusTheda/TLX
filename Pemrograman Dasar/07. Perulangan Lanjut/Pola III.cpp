#include <iostream>
using namespace std;

int main() {
    int input, number = 0, line = 1;
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        // for a line
        for (int x = 0; x < line; x++) {
            // number output
            cout << number;
            //changing number
            number++;
            if (number == 10) number = 0;
        }
        line++;
        cout << endl;
    }
}