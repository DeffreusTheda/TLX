#include<iostream>
using namespace std;
 
long long sum;
long long n,i,int1,int2;
string input1, input2, char1, char2;
 
int main(){
	cin >> n;
	cin >> input1;
	cin >> input2;
	for(i=0 ; i<n ; i++){
		char1=input1[i]; char2=input2[i];
		int1=stoi(char1);
		int2=stoi(char2);
		if(abs(int1-int2)>5){
			if(int1<int2){
				int1+=10;
			}
			else int2+=10;
		}
		sum+=abs(int1-int2);
	}
	cout<<sum<<endl;
}