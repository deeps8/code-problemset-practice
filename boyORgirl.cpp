#include<bits/stdc++.h>
using namespace std;

int main(){
	int flag=0,i,j;
	string name;
	cin>>name;
	
	for(i=0;i<name.length();i++){
		for(j=i+1;j<name.length();j++){
			if(name[j]==name[i] && name[j]!='0'){
				flag++;
				name[j]='0';
			}
				
		}
	}
	
	
	if((name.length()-flag)%2 != 0)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
	return 0;
}
