#include<iostream>
using namespace std;

int main(){
	
	int n,c=0;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		if((s[i][0] == 'O' && s[i][1]== 'O') || (s[i][3]=='O' && s[i][4]=='O'))
			c=1;	
	}
	if(c!=0)
		cout<<"YES"<<endl;
	else{
		cout<<"NO"<<endl;
		return 0;
	}
			
	for(int i=0;i<n;i++){
		
		if(s[i][0]-s[i][1]==0 && c==1 && s[i][0]=='O'){
			cout<<"++"<<s[i][2]<<s[i][3]<<s[i][4];
			c=0;
		}
		else if(s[i][3]-s[i][4]==0 && c==1 && s[i][3]=='O'){
			cout<<s[i][0]<<s[i][1]<<s[i][2]<<"++";
			c=0;
		}
		else{
			cout<<s[i];
		}
		cout<<endl;
		
	}	
	
	
	return 0;
}
