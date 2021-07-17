#include<iostream>
using namespace std;

int main(){
	
	int d,n[]={1,5,10,20,100},c=0;
	cin>>d;
		
	for(int i=4;i>=0;i--){
		if(d/n[i]!=0){
			c += d/n[i];
			d = d%n[i];
		}
	}
	cout<<c;
	return 0;
}
