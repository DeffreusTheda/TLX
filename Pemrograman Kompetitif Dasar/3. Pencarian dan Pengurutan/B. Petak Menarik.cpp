#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long

// bruh keep goeng men

ll N, M, K;
ll petak[105][105];

ll kemenarikan(ll y, ll x) {
    ll res = 0;
    if (y > 0) {
        if (res == 0) res = 1;
        res *= petak[y-1][x]; // atas
    }
    if (y < N-1) {
        if (res == 0) res = 1;
        res *= petak[y+1][x]; // bawah
    }
    if (x > 0) {
        if (res == 0) res = 1;
        res *= petak[y][x-1]; // kiri
    }
    if (x < N-1) {
        if (res == 0) res = 1;
        res *= petak[y][x+1]; // kanan
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> N >> M >> K;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < M; j++) {
            cin >> petak[i][j];
        }
    }
    for (ll m = 0; m < M; m++) {
        for (ll n = 0; n < N; n++) {
            if (K == kemenarikan(n, m)) {
                cout << n+1 << " " << m+1;
                return 0;
            }
        }
    }
    cout << "0 0";

    return 0;
}