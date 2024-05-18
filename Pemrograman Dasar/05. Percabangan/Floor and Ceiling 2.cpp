#include <iostream>
using namespace std;

int main() {
    double input;
    cin >> input;
    int bulat = int(input);
    if(int(input) == input) cout << input << " " << input;
    else if (input < 0) cout << bulat-1 << " " << bulat;
    else if (input > 0) cout << bulat << " " << bulat+1;
}