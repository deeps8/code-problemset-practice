#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,c=0;
		cin>>n;
		string s,a="2020";
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]==a[c]){
				c++;
			}
			else break;
		}
		
		int k = n-(a.length()-c);
//		cout<<"c : "<<c<<" K : "<<k<<" --- ";
		for(int i=k;i<n;i++){
			if(s[i]==a[c])
				c++;
			else break;	
		}
		
		if(c==a.length())
			cout<<"YES\n";
		else
			cout<<"NO\n";	
	}
	
	return 0;
}
