#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//* Show us your worth.

string S1, S2, S3, S4;

int main() {
    cin >> S1 >> S2 >> S3 >> S4;
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    S1.erase(S1.find(S2), S2.length());
    S1.insert((S1.find(S3) + S3.length()), S4);
    cout << S1;
}