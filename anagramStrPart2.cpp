// two string anagram or not
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	
	string s1,s2;
	cin>>s1>>s2;
	
	if(s1.length() != s2.length()){
		cout<<"Not Anagram";
		return 0;
	}
	
	map<char,int> mp;
	for(int i=0;s1[i];i++){
		mp[tolower(s1[i])]++;
		mp[tolower(s2[i])]--;
	}
	
	for(auto m:mp){
		if(m.second!=0){
			cout<<"Not Anagram";
			return 0;
		}
	}
	
	cout<<"Anagram";
	
	return 0;
}
