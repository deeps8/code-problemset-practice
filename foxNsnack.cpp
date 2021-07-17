#include<iostream>
using namespace std;

int main(){
	
	int n,m,t=1,c=1;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
			
		for(int j=1;j<=m;j++){
			if(t>0){
				cout<<"#";
			}else{
				if(c>0 && j==m){
					cout<<"#";
				}	
				else if(c<0 && j==1){
					cout<<"#";
				}	
				else
					cout<<".";
			}
		}
		t=-t;
		if(t>0)
			c=-c;
		cout<<endl;
	}
	
	return 0;
}
