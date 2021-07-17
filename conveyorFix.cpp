#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m,c=0;
		cin>>n>>m;
		string s[n];
		
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		for(int i=0;i<n;i++){
			if(s[i][m-1]=='R')
				c++;
		}	
		
		for(int i=0;i<m;i++){
			if(s[n-1][i]=='D')
				c++;
		}	
		
		cout<<c<<endl;
	}
	
	return 0;
}
