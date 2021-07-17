#include<iostream>
using namespace std;

int main(){
	
	int n,val;
	cin>>n;
	
	while(n-->0){
		cin>>val;
		if(val == 1){
			cout<<"HARD";
			return 0;
		}
			
	}
	
	cout<<"EASY";
	
	return 0;
}
