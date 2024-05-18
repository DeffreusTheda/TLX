#include <iostream>
#include <cstdio>
using namespace std;

// kill tle, don't wa

int N, current, modus, modusSize;
int inputs[100000];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> current; // printf("current: %d\n", current);
        inputs[current]++; // printf("inputs[%d]: %d\n", current, inputs[current]);
    }
    for (int i = 0; i < 100001; i++) {
        if (inputs[i] >= modusSize) {
            modusSize = inputs[i]; // printf("modusSize: %d\n", modusSize);
            modus = i; // printf("modus: %d\n", modus);
        }
    }
    cout << modus;

    return 0;
}