// convert alternate character upper case
#include<iostream>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	for(int i=0;s[i];i++){
		if(i%2==0)
			s[i] -= 32;
	}
	
	cout<<s;
	
	return 0;
}
