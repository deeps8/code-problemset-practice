#include<iostream>
using namespace std;

int main(){
	
	string s;
	int n,c=1;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.length();){
		cout<<s[i];
		i = i+c;
		c = c+1;
	}
	return 0;
}
