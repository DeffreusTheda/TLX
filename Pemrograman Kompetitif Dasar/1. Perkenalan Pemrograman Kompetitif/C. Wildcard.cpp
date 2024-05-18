#include <iostream>
#include <cstdio>
using namespace std;

string reg, ar[101];
int n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> reg >> n;
    for(int N = 0; N<n; N++) {
        cin >> ar[N];
    }
    if(reg == "*") {
        for(int N=0; N<n; N++){
            cout << ar[N];
            if (N<n-1) cout << "\n";
        }
    }

    return 0;
}