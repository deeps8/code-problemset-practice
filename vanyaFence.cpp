#include<iostream>
using namespace std;

int main(){
	
	int n,h,f,sum=0;
	cin>>n>>h;
	
	while(n-->0){
		cin>>f;
		if(f>h)
			sum += 2;
		else
			sum += 1;	
	}
	
	cout<<sum;
	
	return 0;
}
