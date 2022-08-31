#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	ll x,m,n=0,i=0;
	cin>>x>>m;

	n = ceil(log2(x));

	if(m<n){
		cout<<0<<endl;
		return;
	}

	cout<<m-n<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}