#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int a,b,m;
	long long ans=1;
	cin>>a>>b;
	m = min(a,b);
	
	for(int i=1;i<=m;i++){
		ans *= i ;
	}
	
	cout<<ans;
	
	return 0;
}
