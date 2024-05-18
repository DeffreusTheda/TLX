#include <cstdio>
#include <iostream>
using namespace std;

// wkkwwkkwk

char i;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin>>i;
    if(i=='Y'||i=='T')cout<<"Terima kasih, anda telah memilih jawaban";
    else cout<<"Maaf, karakter yang anda ketikkan bukan 'Y' atau 'T'";
    
    return 0;
}