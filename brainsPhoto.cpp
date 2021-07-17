#include<iostream>
using namespace std;

int main(){
	
	int n,m;
	char color;
	cin>>n>>m;
	for(int i=0;i<n*m;i++){
		cin>>color;
		if(color=='C' || color=='M' || color=='Y'){
			cout<<"#Color";
			return 0;
		}
			
	}
	
	cout<<"#Black&White";
	
	return 0;
}
