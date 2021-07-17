#include<iostream>
using namespace std;

int main(){
	
	int n,i=2,c=0,sum=0;
	cin>>n;
	
	while(true){
		sum = sum + ((i+1)*i)/2;
		if(sum>=n){
			cout<<--i;
			return 0;
		}
		i++;
	}
	
	cout<<endl<<i;
	
	return 0;
}
