#include<iostream>
using namespace std;

int arr[105];

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    arr[1] = a;
    arr[2] = b;
    for(int i=1 ; i<=c ; i++){
        if(i == 2 || i == 1) continue;
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[c]<<endl;
}