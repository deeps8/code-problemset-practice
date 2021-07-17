// https://codeforces.com/problemset/problem/265/A
#include<iostream>
using namespace std;

int main(){
	int c=0;
	string s,t;
	cin>>s>>t;
	
	for(int i=0;i<t.length();i++){
		if(t[i]==s[c])
			c++;
	}
	
	cout<<c+1<<endl;
	
	return 0;
}
