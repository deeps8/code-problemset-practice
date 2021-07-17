#include<iostream>
using namespace std;


int main(){
	
	int n,a[2]={0};
	cin>>n;
	char s;
		
	for (int i = 0;i<n; ++i) {
		cin>>s;
		if(s=='z')
			a[1]++;
		else if(s=='n')
			a[0]++;	
	}
	
	for(int i=0;i<a[0];i++){
		cout<<1<<" ";
	}
	for(int i=0;i<a[1];i++){
		cout<<0<<" ";
	}
	
	return 0;
}
