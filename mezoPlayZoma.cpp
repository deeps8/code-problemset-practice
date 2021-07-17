#include<iostream>
using namespace std;

int main(){
	
	int n,r=0,l=0;
	string s;
	
	cin>>n;
	cin>>s;
	
	for(int i=0;i<n;i++){
		if(s[i]=='R')
			r++;
		else
			l++;	
	}
	
	cout<<l+r+1;
		
	return 0;
}
