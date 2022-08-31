#include<bits/stdc++.h>
using namespace std;

#define tc ll t; cin>>t; while(t--)
#define ll long long
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define debug(x) cout << #x << " " << x << endl;
#define MOD 1000000007

void solve () {
	ll n,k,m,mul;
	cin>>n>>k>>m;
	
	string s,next="";
	cin>>s;

	if(n==1){
		if(s[0]=='0'){
			cout<<1<<endl;
			return;
		}
		else if(s[0]=='1'){
			ll p = 1;
			for (ll i = 0; i < m; ++i){
				p = (p*k)%MOD;
			}
			cout<<p<<endl;
			return;
		}
	}

	while(m--){

		for(ll i=0;i<n;i++){
				mul = (s[i]-'0')*k;
				next+= to_string(mul);
		}
		s = next;
		next = "";
		n=s.length();
	}
		
	cout<<s.length()%MOD<<endl;
}

int main() {
	fastio();
	tc {
		solve();
	}
}