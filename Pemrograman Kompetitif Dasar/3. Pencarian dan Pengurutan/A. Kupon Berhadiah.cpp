#include <iostream>
#include <cstdio>
using namespace std;

#define ll long long

// bruh keep goeng men

ll N, X, test, dist, lowestDistance = 1000000, winner = 1000000;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   
    cin >> N >> X; //printf("N = %lli\nX = %lli\n", N, X);
    for (int n = 1; n <= N; n++) {
        cin >> test; //printf("test = %lli\n", test);
        dist = abs(X - test); //printf("dist = %lli \n", dist);
        if ((dist < lowestDistance) || (dist == lowestDistance && test < winner)) {
            winner = test; //printf("winner = %lli\n", winner);
            lowestDistance = dist; //printf("lowestDistance = %lli\n", lowestDistance);
        }
    }
    cout << winner;

    return 0;
}