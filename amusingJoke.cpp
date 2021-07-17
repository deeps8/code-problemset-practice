#include<iostream>
using namespace std;

int main(){
	
	int l[26]={0};
	string s1,s2,s3;
	
	cin>>s1>>s2>>s3;
	
	if(s1.length()+s2.length() != s3.length()){
		cout<<"NO";
		return 0;
	}
	
	for(int i=0;i<s1.length();i++)
		l[s1[i]-'A']++;

	for(int i=0;i<s2.length();i++)
		l[s2[i]-'A']++;	
	
	for(int i=0;i<s3.length();i++){
		int j = s3[i]-'A';
		l[j]--;
		if(l[j]<0){
			cout<<"NO";
			return 0;
		}	
	}
	
	cout<<"YES";
			
	
	return 0;
}
