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
	cin>>n; log2()

	vector<ll> a(n),temp(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
		temp[i] = a[i];
	}

	sort(temp.begin(),temp.end());
	ll c = 0;
	for(ll i=0;i<n;i++){
		cout<<int(a[i] & temp[i])<<" ";
		if( temp[i]!=a[i] && (temp[i] & a[i])==0){
			c++;
		}
	}
	// cout<<endl;
	
	if(c>=n-c)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
	return 0;
}