#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long
#define u unsigned
#define us unsigned short

// Deep inside

us T, N, M;
string test, winner, winners[85], winnerScore[3] = {"-1", "-1", "-1"}, data[85][4];

void winnerUpdate(int index, int session) {
    if (winnerScore[session] < data[index][session]) {
        winner = data[index][0];
        winnerScore[session] = data[index][session];
    } else winnerUpdate(index, session-1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> T;
    for (us t = 1; t <= T; t++) {
        cin >> N >> M >> test;
        for (us n = 1; n <= N; n++) {
            for (us x = 0; x < 4; x++) {
                cin >> data[n][x];
            }
        }
        bool isWinner = false;
        for (us m = 1; m <= M; m++) {
            for (int n = 1; n <= N; n++) {
                winnerUpdate(n, 2);
            }
            for (int c = 0; c < N; c++) {
                if (test == winner) {
                    cout << "YA";
                    isWinner = true;
                    break;
                }
            }
        }
        if (isWinner == true) cout << "TIDAK";
        if (t < T) cout << "\n";
    }
    

    return 0;
}