#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	ll  m,n,res=1,x;
	cin>>n>>m;

	vector<int> a(n),ans(n);
	for(int i=0;i<n;i++){
		cin>>x;
		a[i] = x;
	}

	ans[0] = m;
	ans[a[0]-1] = m-1;
	
	for(int i=1;i<n;i++){
		if(a[i]>i+1){
			ans[i] = m;
		}
		else{
			ans[i] = ans[a[i]-1] - 1;
		}
		res *= ans[i]%MOD;
		cout<<res<<" ";
	}
	cout<<endl<<endl;
	res *= ans[0];

	cout<<res<<endl;

}

int main() {
	fastio();
	tc {
		solve();
	}
}