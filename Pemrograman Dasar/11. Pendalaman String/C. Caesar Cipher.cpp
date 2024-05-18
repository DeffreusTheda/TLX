#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

string input;
short int K;

int main() {
    cin >> input >> K; // input values
    short int length = input.length();
    for (int i = 0; i < length; i++) {
        if (input[i] + K > 'z') input[i] = input[i] + K - ('z' - 'a') - 1;
        else input[i] = input[i] + K;
        cout << input[i];
    }
}