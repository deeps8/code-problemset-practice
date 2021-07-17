#include<iostream>
using namespace std;

int main(){
	
	int n,s=0,i=5;
	cin>>n;
	
	while(i>=1){
		if(n/i!=0){
			s = s + n/i;
			n = n%i;
		}
		i--;		
	}
	
	cout<<s;
	
	return 0;
}
