#include <iostream>
#include <cmath>
using namespace std;

// AYO UDAH SANA KERJAIN

int A, B, K, x;

int f(int test) {
    --K;
    if (K > 0) return abs(A * f(test) + B);
    else return abs(A * x + B);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> A >> B >> K >> x;
    cout << f(x);

    return 0;
}
