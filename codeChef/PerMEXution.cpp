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
	string s;
	cin>>n;
	cin>>s;

	string res;
	if(s[n]=='1' && s[0]=='1' && s[1]=='1'){
		res= "YES";
	}
	else{
		cout<<"NO\n";
		return;
	}
	
	vector<ll> a,b;
	a.push_back(0);
	b.push_back(1);
	
	for(ll i=2;i<n;i++){
		if(s[i]=='1'){
			b.push_back(i);
		}
		else{
			a.push_back(i);
		}
	}


	cout<<res<<endl;
	// permutation.
	for(auto i:a)
		cout<<i<<" ";
	for(auto i:b)
		cout<<i<<" ";
	cout<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}