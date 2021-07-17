#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int c,id,n,total=0;
	cin>>c>>id>>n;
	
	for(int i=1;i<=n;i++){
		total = total + (i*c);
	}
	if(total-id>0)
		cout<<total-id;
	else
		cout<<"0";	
	return 0;
	
}
