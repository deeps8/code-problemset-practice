#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a[26]={0},x=1;
		string s,f="";
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s;
			f = f + s;
		}
		
		for(int i=0;i<f.length();i++){
			a[f[i]-97]++;
		}
		
		for(int i=0;i<f.length();i++){
			if(a[f[i]-97]%n!=0){
				x = 0;
				break;
			}
		}
		
		if(x)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
		
	}
	
}
