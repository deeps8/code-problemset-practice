// https://codeforces.com/problemset/problem/1492/A
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long p,a,b,c,bcm,am;
		cin>>p>>a>>b>>c;
		
		bcm = min((b-p%b)%b,(c-p%c)%c);
		am = min((a-p%a)%a,bcm);
		
		cout<<am<<endl;
	}
	
	return 0;
}
