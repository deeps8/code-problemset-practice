#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int a[3];
		cin>>a[0]>>a[1]>>a[2];
		
		sort(a,a+3);
		if(a[2]==a[1])
			cout<<"YES"<<endl<<a[1]<<" "<<a[0]<<" "<<a[0]<<endl;
		else
			cout<<"No"<<endl;	
			
	}
	
	return 0;
}
