#include <cstdio>
#include <iostream>
#include <random>
using namespace std;

int jenis, nomor, tebakjenis, tebaknomor, counttebakjenis, counttebaknomor;

// simple fr

void ptype(){
    cout<<"\n\n1 = Diamond\n2 = Spade\n3 = Heart\n4 = Club\nGuess the card type [1/2/3/4]: ";
    cin>>tebakjenis;
    counttebakjenis++; 
}

void pnum(){
    cout<<"\n\n1 = Ace\n[2-10] = Number\n11 = Jack\n12 = Queen\n13 = King\nGuess the card number [1-13]: ";
    cin>>tebaknomor;
    counttebaknomor++;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    random_device rd;
    uniform_int_distribution<int> dist(1,4);
    int jenis = dist(rd);
    random_device rd2;
    uniform_int_distribution<int> dist2(1,13);
    int nomor = dist2(rd2);

    cout<<"Welcome!!\nBet what the hidden card is!\n";
    ptype();
    pnum();
    while(true) {
        if(tebakjenis == jenis && tebaknomor==nomor) {
            printf("\n\nCongratulations!! You won with %d guess for the card type and %d guess for the card number!\n", counttebakjenis, counttebaknomor);
            return 0;
        }
        else if(tebakjenis == jenis && tebaknomor != nomor) {
            printf("\nYou only got the card type right! Now just guess the number!\n");
            pnum();
        } else if(tebaknomor == nomor && tebakjenis != jenis) {
            printf("\nYou only get the card number right! Now just guess the card type!\n");
            ptype();
        } else {
            cout<<"\nTry again!";
            ptype(); pnum();
        }
    }
}