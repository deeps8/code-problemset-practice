#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007


void solve () {
	ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> diff(n);
	
	for(ll i=0;i<n;i++){
		cin>>a[i];
		diff[i] = (i+1)-a[i];
	}

	ll c = 0,d=0;

	for(ll i=0;i<n;i++){
		if(diff[i]==d){
			c++;
			d--;
		}
	}

	cout<<c<<endl;

}

int main() {
	fastio();
	tc {
		solve();
	}
}