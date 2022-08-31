#include<iostream>
#include<map>

using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	map<char, int> mp1,mp2;
	int flag = 1;
	if(s1.length() == s2.length()){
		for(int i=0;i<s1.length();i++){
			mp1[s1[i]]++;
			mp2[s2[i]]++;
		}
		
		for(auto i:mp1){
			if( mp2.find(i.first) != mp2.end() && mp2[i.first] != i.second)
				flag = 0;		
		}
		
		if(flag)
			cout<<"Anagram : "<<s1<<" ---- "<<s2<<endl;
		else
			cout<<"Not an Anagram"<<endl;	
	}
	else{
		cout<<"Not an Anagram"<<endl;
	}
}
