#include<iostream>
using namespace std;

int main(){
	
	int n,alp[26]={0},i;
	char c;
	
	cin>>n;
	
	while(n-->0){
		cin>>c;
		i = tolower(c)-97;
		alp[i]=1;
	}
	
	for(i=0;i<26;i++){
		if(alp[i]==0){
			cout<<"NO";
			return 0;
		}
		
	}
	cout<<"YES";
	
	return 0;
}
