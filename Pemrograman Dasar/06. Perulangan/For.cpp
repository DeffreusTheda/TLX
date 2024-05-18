#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int kandang, tambah;
    scanf("%d", &kandang);
    int jumlah = 0;
    for (int x = 0; x < kandang; x++) {
        scanf("%d", &tambah);
        jumlah += tambah;
    }
    cout << jumlah;
}