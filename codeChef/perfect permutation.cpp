#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	int n,k;
	cin>>n>>k;

	if(k>n){
		cout<<-1<<endl;
		return;
	}

	if(n==1){
		cout<<1<<endl;
		return;
	}

	cout<<n-k+1<<" ";
	int i;
	for(i=1;i<=n-k;i++){
		cout<<i<<" ";
	}
	i++;
	
	for(;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}