#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,b,ans;
		cin>>n;
		int a[n]={0};
		
		for(int i=0;i<n;i++){
			cin>>b;
			a[b-1]++;
		}
		ans = a[0];
		for(int i=1;i<n;i++){
			if(ans<a[i])
				ans = a[i];
		}
	
		cout<<ans<<endl;
	}
	
	return 0;
}
