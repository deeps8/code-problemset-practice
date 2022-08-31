#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ans=0;
	cin>>n;
	for(int d=1;d <= n; d*=10){
        int tmp = n%d + ((n/d)/10)*d;
        ans = max(ans,tmp);
        cout<<tmp<<" ";
    }
	
	cout<<ans;
    
}
