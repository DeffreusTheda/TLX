#include <cstdio>
#include <iostream>
using namespace std; 

// Lirik lagu anak ayam

int n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin>>n;
    while(n>=1) {
        cout<<"Anak ayam turunlah "<<n<<"\n";
        n--;
        if(n==1 ) {
            cout<<"Mati 1 tingal induknya";
            return 0;
        } else cout<<"Mati 1 tinggallah "<<n<<"\n";
    }
    
    return 0;
}