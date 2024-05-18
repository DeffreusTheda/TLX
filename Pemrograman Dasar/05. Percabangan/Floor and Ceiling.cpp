#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double value;
    int bulat = value;
    cin >> value;
    if(int(value) == value) {
        cout << value << " " << value;
    } else {
        cout << floor(value) << " " << floor(value)+1 << endl;
    }
    return 0;
}