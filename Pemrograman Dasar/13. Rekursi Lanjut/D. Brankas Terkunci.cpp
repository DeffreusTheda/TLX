#include <iostream>
using namespace std;

# define var unsigned short

// why are you-

var N, K, note[9];

int printed(int in) {
    if(in < 0) {return 0;}
    else {return note[in];}
}

void write(int depth) {
    if(depth >= K) {
        for(int i = 0; i < K; i++) {cout << note[i] << " ";}
        cout << "\n";
    }
    else {
        for(int i = printed(depth-1)+1; i <= N; i++) {
            note[depth] = i;
            write(depth + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> N >> K;
    write(0);

    return 0;
}
