#include<iostream>
using namespace std;

int main(){
	
	int c=0;
	string n;
	cin>>n;
			
	for(int i=0;i<n.length();i++){
		if(n[i]=='7' || n[i]=='4')
			c++;
	}
	
	if(c == 7 || c == 4)
		cout<<"YES";
	else
		cout<<"NO";	
	
	return 0;
}
