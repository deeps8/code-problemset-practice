#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int a=0,c=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1' && a==0)
				a = i+1;
			else if(s[i]=='1' && a!=0){
				c = c + (i+1-a-1);
				a=i+1;
			}	
//				cout<<a<<" ";
		}
		
		cout<<c<<endl;	
	}
	
	return 0;
}
