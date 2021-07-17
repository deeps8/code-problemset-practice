#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k,msc=0,sc,flag=0,i;
	
	cin>>n>>k;
	
	for(i = 1;i<=n;i++){
		cin>>sc;		
		if(sc == 0)
			break;	
		
		if(i==k)
			msc = sc;
		
		if(msc-sc<=0)
			flag++;
		
	}
	cout<<flag;
	return 0;
}
