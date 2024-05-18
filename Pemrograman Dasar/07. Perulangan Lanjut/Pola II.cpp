#include <iostream>
using namespace std;

int main() {
    int input, spasi, karakter = 1;
    cin >> input;
    spasi = input;

    for (int i = 0; i < input; i++) {
        // output spasi
        for (int x = 1; x < spasi; x++) {
            cout << " ";
        }
        spasi--;

        //output karakter
        for (int x = 1; x <= karakter; x++) {
            cout << "*";
        }
        karakter++;
        cout << endl;
    }
}

// this is a failure:
/*int main() {
    int input, barisKe = 1;
    cin >> input;
    
    while (barisKe <= input) {

        for (int karakterKe = 1; karakterKe <= input; karakterKe++) { // untuk karakter keberapa?
            if (karakterKe < input) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
        barisKe++;
    }
}*/