#include<bits/stdc++.h>
using namespace std;

int main(){
	int flag=0,n;
	char ms;
	string s;
	cin>>n>>s;
	ms=s[0];
	
	for(int i=1;i<n;i++){
		if(s[i]==ms){
			flag++;
		}else{
			ms = s[i];
		}
	}
	
	cout<<flag;
	return 0;
}
