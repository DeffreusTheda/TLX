#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long
#define u unsigned
#define us unsigned short

// Believe bro

us T, N, M;
bool sortRun;
string test;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> T;
    for(int t = 0; t < T; t++) {
        cin >> N >> M >> test;
        string arr[N][4];
        // input
        for(int y = 0; y < N; y++) {
            for (int x = 0; x < 4; x++) {
                cin >> arr[y][x];
            }
        }
        // sort
        do {
            sortRun = false;
            for(int y = 0; y < N-1; y++) {
                if(arr[y][3] == arr[y+1][3]) {
                    if(arr[y][2] == arr[y+1][2]) {
                        if(arr[y][1] < arr[y+1][1]) {
                            for(us i = 0; i < 4; i++) {
                                swap(arr[y][i], arr[y+1][i]);
                            }
                            sortRun = true;
                        }
                    } else if(arr[y][2] < arr[y+1][2]) {
                        for(us i = 0; i < 4; i++) {
                            swap(arr[y][i], arr[y+1][i]);
                        }
                        sortRun = true;
                    }
                } else if(arr[y][3] < arr[y+1][3]) {
                    for(us i = 0; i < 4; i++) {
                        swap(arr[y][i], arr[y+1][i]);
                    }
                    sortRun = true;
                }
            }
        } while(sortRun == true);
        // output
        bool notWinner = true;
        for(int m = 0; m < M; m++) {
            if(arr[m][0] == test) {
                cout << "YA";
                if (t < T-1) cout << "\n";
                notWinner = false;
                break;
            }
        }
        if (notWinner == true) {
            cout << "TIDAK";
            if(t < T-1) cout << "\n";
        }
    }

    return 0;
}