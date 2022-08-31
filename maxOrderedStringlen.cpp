#include<iostream>
using namespace std;

int main(){
	
	string s,v="aeiou";
	cin>>s;
	int c=0,m=0;
	for(int i=0,j=0;s[i];i++){
		if(s[i]==v[j]){
//			cout<<s[i]<<" "<<v[j];
			c++;
			if(s[i+1]==v[j+1]){
//				cout<<s[i+1]<<" "<<v[j+1];
				j++;
			}
		}
		else{
			m=max(m,c);
			c=0;
			j=0;
		}
	}
	
	
	cout<<endl<<max(m,c);
	return 0;
}
