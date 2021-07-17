#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string s;
		int f=1;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(f==1 && s[i]=='a')
				cout<<'b';
			else if(f==1 && s[i]!='a')
				cout<<'a';
			else if(f==-1 && s[i]=='z')
				cout<<'y';
			else if(f==-1 && s[i]!='z')			
				cout<<'z';
				
			f = -f;	
		}
		cout<<endl;	
	}
	
	return 0;
}
