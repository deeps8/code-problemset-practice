#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	char ch = 'a';
 	int sum = 0;
	 	
	for(int i=0;i<s.length();i++){
		if(abs(s[i]-ch) > 13 )
			sum = sum + (26-abs(s[i]-ch));
		else
			sum = sum + abs(s[i]-ch);	
	
		ch = s[i];			
	}
	
	cout<<sum;
	
	return 0;
}
