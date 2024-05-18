#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

//* one topic one day lets goooo

string input;
char chara;

int main() {
    cin >> input;
    for (int i = 0; i < int(input.length()); i++) {
        chara = input[i];
        if (chara >= 'a' && chara <= 'z') chara -= 32;
        else if (chara >= 'A' && chara <= 'Z') chara += 32;
        cout << chara;
    }
}