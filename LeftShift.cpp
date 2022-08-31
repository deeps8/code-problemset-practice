#include<iostream>
using namespace std;

int main(){
	
	int a[3] = {1,0,1};
	int ans=0;
	for(int i=0;i<3;i++){
		ans = 2*ans + a[i];
	}
	
	cout<<ans;
	
	return 0;
}
