#include <bits/stdc++.h>
using namespace std;

int main(){
	
	map<char, int> mp;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
			mp[s[i]]++;
		
	}
	
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	return 0;
}
