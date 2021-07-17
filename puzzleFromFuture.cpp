#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		string b,a="1",sum="1";
		cin>>n>>b;
		
		if(b[0]=='1')
			sum[0]='2';
		
		for(int i=1;i<n;i++){
			if(b[i]=='1')
				sum.append("2");
			else
				sum.append("1");
			
			if(sum[i]==sum[i-1]){
				a.append("0");
				sum[i] = b[i];	
			}
			else
				a.append("1");			
		}
		
		cout<<a<<endl;
	}
	
	return 0;
}
