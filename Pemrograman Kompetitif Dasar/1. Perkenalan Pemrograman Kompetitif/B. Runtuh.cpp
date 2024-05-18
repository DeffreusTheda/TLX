#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int R, C, br = -1;
bool runtuh = true;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> R >> C;
    char ar[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> ar[i][j];
        }
    }
    do {
        runtuh = false;
        for(int r = R-1; r >= 0; r--) {
            // is it all 1
            bool baris = true;
            for(int c = 0; c < C; c++) {
                if(ar[r][c] == '0') {
                    baris = false;
                    break;
                }
            } // per char
            if(baris == true) {
                for(int c = 0; c < C; c++) ar[r][c] = '0';
                if(br < r) {
                    br = r;
                }
                printf("(br:%d)", br);
            } // clear baris yang valid
        } // check perbaris

        for(int x = 0; x < C; x++) {
            int cnt = 0;
            for(int y = br; y >= 0; y--) {
                if(ar[y][x] == '1') cnt++;
                printf("(cnt:%d)", cnt);
            } // hitung 1
            int lt = R-1;
            for(int y = br+1; y < R; y++) {
                if(ar[y][x] == '1') {
                    lt = y;
                    break;
                }
            } // cari lantai
            printf("(lt:%d)", lt);
            for(int y = lt-1; y >= 0; y--) {
                if(y >= lt-cnt) ar[y][x] = '1';
                else ar[y][x] = '0';
            } // jatuhin
        } // per banjar
    } while(runtuh); // runtuh berkali kali
    
    for(int r = 0; r < R; r++) {
        for(int c = 0; c <C; c++) {
            cout << ar[r][c];
        }
        cout << "\n";
    }

    return 0;
}