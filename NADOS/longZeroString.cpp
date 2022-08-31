#include<iostream>
using namespace std;

int main(){
	
	int n,k,ans=0;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;s[i];i++){
		if(s[i]=='0'){
			ans++;
			continue;
		}
		else{
			k -= ('9'-s[i])+1;
			if(k){
				ans++;
			}
		}
	}
	
	cout<<ans-1;
	
	
	
	return 0;
}
