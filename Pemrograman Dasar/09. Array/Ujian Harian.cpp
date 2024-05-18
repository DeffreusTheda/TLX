#include <cstdio>

int main() {
    int jumlahBebek, bebekLolos, totalNilai = 0;
    scanf("%d", &jumlahBebek);
    int nilai[jumlahBebek];
    // masukan nilai
    for (int x = 0; x < jumlahBebek; x++) {
        nilai[x] = x;
        totalNilai += nilai[x];
    }
    float rataRataNilai = totalNilai/jumlahBebek;
    // berapa yang lolos?
    for (int x = 0; x < jumlahBebek; x++) {
        if (nilai[x] >= rataRataNilai) bebekLolos++;
    }
    printf("%d", bebekLolos);
}