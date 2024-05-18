#include<iostream>
using namespace std;

int n,ans,pangkat,j,i;
string s;

int main(){
    cin>>n;
    while(n!=0){
        if(n%2==1) s+='1';
        else s+='0';
        cout << "s: " << s << endl;
        n=n/2;
    }
    int simpan=s.length();
    for(i=0 ; i<s.length() ; i++){
        simpan--;
        pangkat=1;
        if(s[i]=='1'){
            for(j=1 ; j<=simpan ; j++){
                pangkat*=2;
            }
            ans+=(pangkat*1);
        }
        else {
            for(j=1 ; j<=simpan ; j++){
                pangkat*=2;
            }
            ans+=(pangkat*0);
        }
    }
    cout<<ans<<endl;
}
