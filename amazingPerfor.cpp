#include<iostream>
using namespace std;

int main(){
	
	int n,a,max,min,c=0;
	cin>>n;
	
	cin>>a;
	max = min = a;
	n--;
	while(n-->0){
		cin>>a;
		if(max < a){
			max = a;
			c++;
		}
		else if(min > a){
			min = a;
			c++;
		}
		
	}
	
	cout<<c;
	
	
	return 0;
}
