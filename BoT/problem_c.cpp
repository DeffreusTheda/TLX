#include<iostream>
using namespace std;
string n;
 
void a(string n){
	if(((n[n.length()-1]-'0') + ((n[n.length()-2]-'0')*10)) % 4 == 0) cout << 4 << endl;
	else cout << 0 << endl;
}
 
void b(string n){
	if((n[0]-'0')%4==0) cout<<4<<endl;
	else cout<<0<<endl;
}
 
int main(){
	cin>>n;
	if(n.length()>=2) a(n);
	if(n.length()<2) b(n);
}