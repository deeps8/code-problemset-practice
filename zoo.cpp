#include<iostream>
using namespace std;

int main(){
	
	int zs=0,os=0;
	string str;
	cin>>str;
	
	for(int i=0;str[i];i++){
		if(str[i]=='z')
			zs++;
		else if(str[i]=='o')
			os++;
		else{
			cout<<"No";
			return 0;
		}
	}
	
	if(2*zs==os)
		cout<<"Yes";
	else
		cout<<"No";
	
	return 0;
}

