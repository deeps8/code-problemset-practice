#include<iostream>
using namespace std;

int main(){
	
	int a[3] = {1,2,100},p=0;
	int cm = INT_MIN;
	for(int i=2;i>=0;i--){
		if(cm<a[i]){
			cm=a[i];
		}

		p += cm-a[i];
		cout<<p<<" "; 
	}
	
	cout<<p;
	
	return 0;
}
