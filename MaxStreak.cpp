#include<iostream>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	int c=0,m=c;
	for(int i=0;s[i];i=i+2){
		if(s[i]=='0' && c >= m){
			m = c;
			c = 0;
		}
		else if(s[i]=='0' && c < m )
			c = 0;
		
		else{
			c++;
		}
		
		cout<<c<<"-"<<m<<endl;
	}
	
	if(c)
		m = c;
	
	cout<<"Streak : "<<m;
	
	return 0;
}
