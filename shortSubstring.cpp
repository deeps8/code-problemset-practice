#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	while(n-->0){
		
		string s;
		cin>>s;
		cout<<s[0];
		for(int i=1;i<s.length();){
			cout<<s[i];
			i += 2;
		}
		cout<<endl;
	}
	
	return 0;
}
