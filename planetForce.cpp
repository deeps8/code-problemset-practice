#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int x,y,a=0,b=0,f=1;
		cin>>x>>y;
		string s;
		cin>>s;
		
		for(int i=0;i<s.length();i++){
			if(s[i]=='U' && b<y)
				b++;
			else if(s[i]=='D' && b>y)
				b--;
			else if(s[i]=='R' && a<x)
				a++;
			else if(s[i]=='L' && a>x)
				a--;
				
//			cout<<"[ "<<a<<" "<<b<<"] ";		
			
			if(x==a && y==b){
				cout<<"YES\n";
				f=0;
				break;
			}
			
			
		}
		
		if(f)
			cout<<"NO\n";
	}
	
	return 0;
}
