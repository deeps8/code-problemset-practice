#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int i,low=0,up;
	string s;
	cin>>s;
	
	for(i=0;i<s.length();i++){
		if((int)s[i]>=97)
			low++;	
	}
		
	up = s.length() - low;
	
	if(up<=low){
		for(i=0;i<s.length();i++) 
			s[i] = tolower(s[i]);
	}
	else{
		for(i=0;i<s.length();i++) 
			s[i] = toupper(s[i]);
	}
		
		
	cout<<s;	
	return 0;
}
