#include <iostream>
using namespace std;

int main() {
    int N, K, value = 0, counter = 0;
    string akhir = " ";
    cin >> N >> K;

    for (int x = 0; x < N; x++) {
        counter++; // untuk menggantikan angak dengan *
        value++;

        // agar tidak ada space setelah angka terakhir, gantikan newline
        if (!(x < N-1)) {
            akhir = "\n";
        }

        if (counter == K) {
            cout << "*" << akhir;
            counter = 0;
        } else {
            cout << value << akhir;
        }
    }

    return 0;
} // bismillah _/\_