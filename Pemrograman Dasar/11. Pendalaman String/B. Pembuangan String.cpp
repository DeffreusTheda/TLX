#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//* "Kamu keren vang"

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
    string S, T;
    cin >> S >> T;
    int eraseIndex;
    while (S.find(T) != -1) {
        eraseIndex = S.find(T);
        S.erase(eraseIndex, T.length());
    }
    cout << S;
    return 0;
}