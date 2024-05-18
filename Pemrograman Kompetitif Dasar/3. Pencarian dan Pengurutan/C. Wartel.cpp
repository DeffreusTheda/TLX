#include <iostream>
using namespace std;

// Makasih kak Davin :)

int N, Q, high, low, mid, resIndex;
string test, inputs[100005][2];
bool run = true;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> N >> Q;
    for (int n = 1; n <= N; n++) {
        cin >> inputs[n][0] >> inputs[n][1];
    }

    for (int q = 1; q <= Q; q++) {
        low = 1;
        high = N;
        cin >> test;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (test == inputs[mid][0]) {
                cout << inputs[mid][1];
                break;
            } else if (test < inputs[mid][0]) {
                high = mid - 1;
            } else if (test > inputs[mid][0]) {
                low = mid + 1;
            }
        }
        if (inputs[mid][0] != test) cout << "NIHIL";
        if (q < Q) cout << "\n";
    }
    
    return 0;
}