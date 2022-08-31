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
	
	for(ll i=0;i<n;i++)
		cin>>a[i];

	ll ans = a[0] - a[1];
	int odd= 1,even=0;
	for(ll i=2;i<n-1;i++){
		if(a[i] > a[i+1] && even<2){
			ans += a[i];
			even++;
			odd=0;
		}
		else if(odd<2){
			ans -= a[i];
			odd++;
			even = 0;
		}
		else{
			ans += a[i];
			even++;
			odd=0;
		}
		cout<<ans<<" [ "<<odd<<" "<<even<<"]\n";
	}

	if(even<2)
		ans += a[n-1];
	else
		ans -= a[n-1];

	cout<<ans<<endl;

}

int main() {
	fastio();
	tc {
		solve();
	}
}