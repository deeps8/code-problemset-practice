#include<iostream>
using namespace std;

int main(){
	
	string s,res="";
	cin>>s;
	int c=0,i=0;
	for(i=0;s[i];i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			c++;
		}
		else if(res.length()<c){
			res = s.substr(i-c,c);
			c=0;
		}
		else{
			c=0;
		}
	}
	
	if(res.length()<c){
		
		res = s.substr(i-c,c);
	}
	
	cout<<res<<" Len - "<<res.length();
	
	return 0;
}
