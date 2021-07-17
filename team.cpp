#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,sum,flag=0,en;
	cin>>n;
	
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<3;j++){
			cin>>en;
			sum = sum + en;
		}
		
		if(sum>=2)
			flag++;
	}
	
	cout<<flag;
	return 0;
}
