#include<iostream>
using namespace std;

int main(){
	
	string c,s;
	cin>>c;
	
	for(int i=0;i<=4;i++)
	{
		cin>>s;
		if(s[0]==c[0] || s[1]==c[1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}
