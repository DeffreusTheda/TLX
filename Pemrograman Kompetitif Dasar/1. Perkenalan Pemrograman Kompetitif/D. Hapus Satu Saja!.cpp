#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define ll long long
#define u unsigned
#define us unsigned short

// Was this all that you thought it could be?

char A[1005];
string B;
bool IS_POSSIBLE = false;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> A >> B;
    us A_LENGTH = strlen(A);
    us B_LENGTH = B.length();
    if (A_LENGTH - B_LENGTH == 1) {
        for (us i = 0; i < A_LENGTH; i++) {
            string test = A;
            test.erase(i, 1);
            if (test == B) {
                cout << "Tentu saja bisa!";
                IS_POSSIBLE = true;
                break;
            }
        }
    }
    if (IS_POSSIBLE == false) cout << "Wah, tidak bisa :(";

    return 0;
}